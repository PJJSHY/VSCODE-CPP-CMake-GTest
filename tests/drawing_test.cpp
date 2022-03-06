#include "drawing.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(DrawingTest, WindowHeight) {
  Drawing d;

  EXPECT_EQ(d.get_window_height(), 600);
}
