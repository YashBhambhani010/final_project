#include <FastLED.h>


#define NUM_LED 4
#define LED_PIN 9

CRGB led[NUM_LED];


int a=0;


void setup() {
  FastLED.addLeds<NEOPIXEL,LED_PIN>(led, NUM_LED);
     for (int i = 0; i<NUM_LED; i++){
      led[i] = CRGB(0, 255, 0); 
      FastLED.show();
      delay(100);   
   }
 /* FastLED.clear();
  delay(3000);
  
   if (a==0){
   for (int i = 0; i<NUM_LED; i++){
      led[i] = CRGB(255, 0, 0); 
      FastLED.show();
      delay(100);   
   }
   delay(13000);
   for (int i = 0; i<NUM_LED; i++){
      led[i] = CRGB(255, 130, 0); 
      FastLED.show();
      delay(100);   
   }
   delay(5000);
  for (int i = 0; i<NUM_LED; i++){
      led[i] = CRGB(0, 255, 0); 
      FastLED.show();
      delay(100);   
    }
    
  }*/
}

void loop() {
  // put your main code here, to run repeatedly:

}
