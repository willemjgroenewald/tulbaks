#include <SPI.h>
#include <Ethernet.h>

// Enter a MAC address and IP address for your controller below.
// The IP address will be dependent on your local network:
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip( 192,168,1,102 );


String requestHeader = "";
String requestData = "";
boolean headerEnded = false;
// Initialize the Ethernet server library
// with the IP address and port you want to use 
// (port 80 is default for HTTP):
EthernetServer server(80);

void setup()
{
  Serial.begin(9600);
  // start the Ethernet connection and the server:
  Ethernet.begin(mac, ip);
  // disable w5100 SPI so SD SPI can work with it
//  digitalWrite(10,HIGH);
  delay(2000);
  server.begin();

  Serial.println("setup finished");
}



void loop() {
  EthernetClient client = server.available();
  if (client) {
    getRequest(client);
    Serial.print(requestHeader);
    Serial.print(requestData);
    sendResponse(client, "Success!");
  }
}

void getRequest(EthernetClient client) {
  requestHeader = "";
  requestData = "";
  headerEnded = false;
  boolean currentLineIsBlank = true;
  while (client.connected()) {
    while(client.available()) {
      char c = client.read();
      if(!headerEnded && requestHeader.length() < 100) {
        requestHeader += c;
      }
      requestHeader.replace(" HTTP/1.1", "");
      requestHeader.replace("POST /", "");
      

      // As soon as we hit a newline, stop building the request string
      // if you've got a newline and the line is blank, the http headers have ended
      // heres the good stuff
      if (c == '\n' && currentLineIsBlank) {
        // Here is where the POST data is.  
        while(client.available() && requestData.length() < 100) {
          char d = client.read();
          requestData += d;
        }
        return;
      } else if (c == '\n') {
        // you're starting a new line
        headerEnded = true;
        currentLineIsBlank = true;
      } else if (c != '\r') {
        // you've gotten a character on the current line
        currentLineIsBlank = false;
      }
    }
  }
}

void sendResponse(EthernetClient client, String data) {
  client.println("HTTP/1.0 200 OK");
  client.println("Content-Type: text/html");
  client.println();
  client.println(data);
            
  client.stop();
}
