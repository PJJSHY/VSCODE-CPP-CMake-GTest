#include "drawing.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

// Test fixture sample
class DrawingTest:public ::testing::Test{
protected:
  virtual void SetUp(){

  }
  virtual void Teardown(){

  }
};

TEST_F(DrawingTest, DrawingWorks) {
  
}

char window_name[] = "window name test";
RNG rng(0xFFFFFFFF);
Mat image = Mat::zeros(600, 900, CV_8UC3);

Drawing d;

TEST(DrawingFunctionsTest, Displaying_Big_End) {
  EXPECT_EQ(d.Displaying_Big_End(image, window_name, rng), 0);
}
TEST(DrawingFunctionsTest, Displaying_Random_Text) {
  EXPECT_EQ(d.Displaying_Random_Text(image, window_name, rng), 0);
}
TEST(DrawingFunctionsTest, Drawing_Random_Circles) {
  EXPECT_EQ(d.Drawing_Random_Circles(image, window_name, rng), 0);
}
TEST(DrawingFunctionsTest, Drawing_Random_Ellipses) {
  EXPECT_EQ(d.Drawing_Random_Ellipses(image, window_name, rng), 0);
}
TEST(DrawingFunctionsTest, Drawing_Random_Filled_Polygons) {
  EXPECT_EQ(d.Drawing_Random_Filled_Polygons(image, window_name, rng), 0);
}
TEST(DrawingFunctionsTest, Drawing_Random_Lines) {
  EXPECT_EQ(d.Drawing_Random_Lines(image, window_name, rng), 0);
}
TEST(DrawingFunctionsTest, Drawing_Random_Polylines) {
  EXPECT_EQ(d.Drawing_Random_Polylines(image, window_name, rng), 0);
}
TEST(DrawingFunctionsTest, Drawing_Random_Rectangles) {
  EXPECT_EQ(d.Drawing_Random_Rectangles(image, window_name, rng), 0);
}
TEST(DrawingFunctionsTest, get_delay) {
  EXPECT_EQ(d.get_delay(), 5);
}
TEST(DrawingFunctionsTest, get_window_height) {
  EXPECT_EQ(d.get_window_height(), 600);
}
TEST(DrawingFunctionsTest, get_window_width) {
  EXPECT_EQ(d.get_window_width(), 900);
}