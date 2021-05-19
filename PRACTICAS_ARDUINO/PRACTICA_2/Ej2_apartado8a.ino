void setup() {
int i = 0 ;
         for ( i = 9 ; i < 12 ; i++)
               pinMode( i , OUTPUT) ;
}

 void loop() {
  int vel = 1000;
              int i = 0 ;
              for ( i = 9 ; i < 12 ; i++)
                    {
                       digitalWrite( i , HIGH) ;
                       delay (vel+700) ;
                       digitalWrite( i , LOW);
                       delay (vel) ;

                       vel=vel-200;
                    }
                  
          }
