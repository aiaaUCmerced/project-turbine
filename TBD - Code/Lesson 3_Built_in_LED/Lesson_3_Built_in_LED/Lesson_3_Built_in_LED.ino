/******************************************
 *Website: www.elegoo.com
 * 
 *Time:2017.12.12
 *
 ******************************************/
int Led = 13; //define LED port

void  setup() {

  // initialize the digital pin as an output.
  pin Mode (led, OUTPUT);
}
void  loop(){ 
  val = digitalRead(Shock); //read the value of the digital interface 3 assigned to val
  digital Write(led, HIGH);
  delay(500);
  digital Write(led, LOW);
  delay (500);
}
// turn the LED on (HIGH is the voltage level)
// wait for a second
// turn the LED off by making the voltageLOW
// wait for a second


