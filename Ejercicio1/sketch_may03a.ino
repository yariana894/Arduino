const int led_URS = 12;

void setup() {
  // put your setup code here, to run once:

pinMode(led_URS,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(led_URS, HIGH);   
  delay(3000);               
  digitalWrite(led_URS, LOW);   
  delay(3000);               

}
