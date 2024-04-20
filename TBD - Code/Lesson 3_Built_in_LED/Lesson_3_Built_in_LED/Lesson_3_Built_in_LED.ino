/******************************************
 *Website: www.elegoo.com
 * 
 *Time:2017.12.12
 *
 ******************************************/



int led = LED_BUILTIN; //define LED port

void  setup() {
  
  // initialize the digital pin as an output.
  pinMode (led, OUTPUT);
}
void  loop(){ 
  
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay (1000);
}
// turn the LED on (HIGH is the voltage level)
// wait for a second
// turn the LED off by making the voltageLOW
// wait for a second


