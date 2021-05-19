void setup() {
  for ( int i = 9 ; i <= 11 ; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i=9 ; i <= 11 ; i++){
       digitalWrite( i , HIGH) ;
       delay (200) ;
       digitalWrite( i , LOW);
       delay (200) ;
  }
}
