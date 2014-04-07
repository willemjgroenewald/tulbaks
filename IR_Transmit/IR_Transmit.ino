// This sketch will send out a Nikon D50 trigger signal (probably works with most Nikons)
// See the full tutorial at http://www.ladyada.net/learn/sensors/ir.html
// this code is public domain, please enjoy!
 
int IRledPin =  7;    // LED connected to digital pin 13
 
// The setup() method runs once, when the sketch starts
 
void setup()   {                
  // initialize the IR digital pin as an output:
  pinMode(IRledPin, OUTPUT);      
 
  Serial.begin(9600);
}
 
void loop()                     
{
  Serial.println("Sending IR signal");
 
  SendFujitsu();
 
  delay(10000);  // wait one minute (60 seconds * 1000 milliseconds)
}
 
// This procedure sends a 38KHz pulse to the IRledPin 
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseIR(long microsecs) {
  // we'll count down from the number of microseconds we are told to wait
 
  cli();  // this turns off any background interrupts
 
  while (microsecs > 0) {
    // 38 kHz is about 13 microseconds high and 13 microseconds low
   digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
   delayMicroseconds(10);         // hang out for 10 microseconds, you can also change this to 9 if its not working
   digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
   delayMicroseconds(10);         // hang out for 10 microseconds, you can also change this to 9 if its not working
 
   // so 26 microseconds altogether
   microsecs -= 26;
  }
 
  sei();  // this turns them back on
}
 
void SendFujitsu() {
  // Switch on my aircon
  // 
pulseIR(3300);

delayMicroseconds(1600);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(1180);

pulseIR(420);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(400);

pulseIR(380);

delayMicroseconds(1200);

pulseIR(440);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(400);

pulseIR(400);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(400);

delayMicroseconds(1200);

pulseIR(440);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(1180);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(1180);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(380);

pulseIR(400);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(400);

delayMicroseconds(1220);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(1180);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(400);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(400);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(1180);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(400);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(400);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(400);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(380);

pulseIR(440);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(380);

pulseIR(420);

delayMicroseconds(1200);

pulseIR(420);

delayMicroseconds(400);

pulseIR(400);
}
