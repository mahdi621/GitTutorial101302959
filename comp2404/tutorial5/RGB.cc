#include "RGB.h"
#include <iostream>

RGB::RGB() {
    this->red = 0;
    this->green = 0;
    this->blue = 0;
}

RGB::RGB(int red, int green, int blue) {
    this->red = red;
    this->green = green;
    this->blue = blue;

}

// RGB::RGB(CuColour colour) {
//     red = (colour >> 16) & 0xFF;
//     green = (colour >> 8) & 0xFF;
//     blue = colour & 0xFF;
// }


int RGB::getR() const {return red;}
int RGB::getB() const {return blue;}
int RGB::getG() const {return green;}

void RGB::setR(int red){this->red = red;}
void RGB::setB(int blue){this->blue = blue;}
void RGB::setG(int green){this->green = green;}
// CuColour RGB::getColour() const {
//     return (red << 16) | (green << 8) | blue;
// }

// void RGB::setColour(CuColour colour) {
//     red = (colour >> 16) & 0xFF;
//     green = (colour >> 8) & 0xFF;
//     blue = colour & 0xFF;
// }

RGB RGB::WHITE(){return RGB(255, 255, 255);}
RGB RGB::BLACK(){return RGB(0, 0, 0);}
RGB RGB::RED(){return RGB(255, 0, 0);}
RGB RGB::GREEN(){return RGB(0, 255, 0);}
RGB RGB::BLUE(){return RGB(0, 0, 255);}

void RGB::print() const{
    cout << "RGB(" << red << ", " << green << ", " << blue << ")" <<endl; 
}
