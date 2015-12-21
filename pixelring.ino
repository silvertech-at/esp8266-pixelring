#include <Adafruit_NeoPixel.h>


#define PIN 15
#define NUMPIXEL 12
#define delaycol 200

Adafruit_NeoPixel strip = Adafruit_NeoPixel( NUMPIXEL, PIN, NEO_GRB + NEO_KHZ800);


void setup() {  
  
  strip.begin();
  strip.setBrightness(30);
  strip.show();
}

void loop() {

  for(int p=0 ; p < NUMPIXEL ; p++ ){
      strip.setPixelColor(p, strip.Color(255,0,0));
      strip.setPixelColor((p-1), strip.Color(0,255,0));
      strip.setPixelColor((p-2), strip.Color(0,0,255));
      strip.setPixelColor((p-3),0);
      strip.show();
      delay(delaycol);
    }

  for(int p=0 ; p < NUMPIXEL ; p++ ){
    strip.setPixelColor(p,0);
    strip.show();
  }
}
