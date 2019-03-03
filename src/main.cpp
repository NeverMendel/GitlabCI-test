#include <iostream>
#include "color.h"

using namespace std;

int main() {
    Color c(255, 80, 80);
    vector<uint8_t> v = c.getRGB();
    for (unsigned int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    cout << c.toRGB() << endl;
    return 0;
}