#include "color.h"
#include <math.h>

using namespace std;

Color::Color(uint8_t red, uint8_t green, uint8_t blue) {
    this->red = red;
    this->green = green;
    this->blue = blue;
}

Color::Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    this->red = red;
    this->green = green;
    this->blue = blue;
}

Color::Color(unsigned long rgb) {
    red = (rgb >> 16) & 0xff;
    green = (rgb >> 8) & 0xff;
    blue = rgb & 0xff;
}

uint8_t Color::getRed() const {
    return red;
}

void Color::setRed(uint8_t red) {
    Color::red = red;
}

uint8_t Color::getGreen() const {
    return green;
}

void Color::setGreen(uint8_t green) {
    Color::green = green;
}

uint8_t Color::getBlue() const {
    return blue;
}

void Color::setBlue(uint8_t blue) {
    Color::blue = blue;
}

vector<uint8_t> Color::getRGB() {
    return {red, green, blue};
}

unsigned long Color::toRGB() {
    return ((red & 0xff) << 16) + ((green & 0xff) << 8) + (blue & 0xff);
}

Color Color::operator+(const Color &b) {
    double red = sqrt((pow(this->red, 2) + pow(b.red, 2)) / 2);
    double green = sqrt((pow(this->green, 2) + pow(b.green, 2)) / 2);
    double blue = sqrt((pow(this->blue, 2) + pow(b.blue, 2)) / 2);

    return Color(red, green, blue);
}

bool Color::operator==(const Color &b) const{
    return this->red == b.red && this->green == b.green && this->blue == b.blue;
}