/***
  * Hack Your Backpack
  * Example Code - squares
  * By Kristin Salomon (kristin.salomon@littlebits.cc)
  * Last updated: September 9, 2015
  ***/

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>


#define MATRIX_PIN    1
#define MATRIX_WIDTH  8
#define MATRIX_HEIGHT 8

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(MATRIX_WIDTH, MATRIX_HEIGHT, MATRIX_PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
  NEO_MATRIX_ROWS + NEO_MATRIX_PROGRESSIVE,
  NEO_GRB            + NEO_KHZ800);

const uint16_t colors[] = {
  matrix.Color(0,255,0),
  matrix.Color(255,0,0),
  matrix.Color(0,0,255),
  matrix.Color(255,0,255),
  matrix.Color(255,255,0),
  matrix.Color(0,255,255)  
 };

void setup() {
  matrix.begin();
  matrix.setBrightness(30);
}

int numCycles = sizeof(colors)/sizeof(uint16_t);
int delaytime = 50;

void loop() {

  for (int i = 0; i < 6; i++)
  {
    delay(delaytime);
    matrix.fillRoundRect(3,3,2,2,0, colors[i]);
    matrix.show();

    delay(delaytime);
    matrix.fillRoundRect(2,2,4,4,0, colors[i]);
    matrix.show();

    delay(delaytime);
    matrix.fillRoundRect(1,1,6,6,0, colors[i]);
    matrix.show();

    delay(delaytime);
    matrix.fillRoundRect(0,0,8,8,0, colors[i]);
    matrix.show();
  }

}
