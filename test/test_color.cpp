#include "gtest/gtest.h"
#include "color.h"

TEST(Color, getRGB){
    vector<uint8_t> values{0, 255, 125};
    Color c(values[0], values[1], values[2]);
    vector<uint8_t> rgb = c.getRGB();
    ASSERT_EQ(rgb, values);
}

TEST(Color, toRGB){
    Color c(255, 255, 255);
    ASSERT_EQ(c.toRGB(), 16777215);
}

TEST(color, operator_plus){
    Color a(0, 255, 0);
    Color b(0, 0, 255);
    Color sum = a + b;
    ASSERT_EQ(sum.getRed(), 0);
    ASSERT_EQ(sum.getGreen(), 180);
    ASSERT_EQ(sum.getBlue(), 180);
}

TEST(color, operator_equal1){
    Color a(0, 255, 255);
    Color b(0, 255, 255);
    ASSERT_TRUE(a == b);
}

TEST(color, operator_equal2){
    Color a(0, 255, 0);
    Color b(0, 0, 255);
    ASSERT_FALSE(a == b);
}