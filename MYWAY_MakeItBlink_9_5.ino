int delay_time = 5; //intial delay time

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print(delay_time);
  Serial.print("\t");
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delay_time);                       
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(delay_time);  

   //if delay time is less than 2000, double
  if(delay_time < 2000){
    delay_time = delay_time << 1; // delay_time = delay_time * 2
  }
   //if delay time is more than or equal to 2000
  if(delay_time >= 2000){
    delay_time = 5; // reset delay time; 
  }

}
