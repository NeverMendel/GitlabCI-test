#include <stdint.h>
#include <vector>

using namespace std;

class Color {

public:
    Color(uint8_t red, uint8_t green, uint8_t blue);

    Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

    Color(unsigned long rgb);

    uint8_t getRed() const;

    void setRed(uint8_t red);

    uint8_t getGreen() const;

    void setGreen(uint8_t green);

    uint8_t getBlue() const;

    void setBlue(uint8_t blue);

    vector<uint8_t> getRGB();

    unsigned long toRGB();

    Color operator+(const Color &b);

    bool operator==(const Color &b) const;

private:
    uint8_t red;
    uint8_t green;
    uint8_t blue;
};