#include <iostream> 
#include <stdio.h>

#include "drawing.h"

int main(void)
{
    Drawing d;
    int c;
    char window_name[] = "Drawing_2 Tutorial";
    RNG rng(0xFFFFFFFF);
    Mat image = Mat::zeros(d.get_window_height(), d.get_window_width(), CV_8UC3);
    imshow(window_name, image);
    waitKey(d.get_delay());
    c = d.Drawing_Random_Lines(image, window_name, rng);
    if (c != 0) return 0;
    c = d.Drawing_Random_Rectangles(image, window_name, rng);
    if (c != 0) return 0;
    c = d.Drawing_Random_Ellipses(image, window_name, rng);
    if (c != 0) return 0;
    c = d.Drawing_Random_Polylines(image, window_name, rng);
    if (c != 0) return 0;
    c = d.Drawing_Random_Filled_Polygons(image, window_name, rng);
    if (c != 0) return 0;
    c = d.Drawing_Random_Circles(image, window_name, rng);
    if (c != 0) return 0;
    c = d.Displaying_Random_Text(image, window_name, rng);
    if (c != 0) return 0;
    c = d.Displaying_Big_End(image, window_name, rng);
    if (c != 0) return 0;
    waitKey(0);
    return 0;
}

