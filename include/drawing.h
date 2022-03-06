#ifndef SHAPE_H
#define SHAPE_H

#pragma once

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;

static Scalar randomColor(RNG& rng);

class Drawing{
private:
	const int NUMBER = 100;
	const int DELAY = 5;
	const int window_width = 900;
	const int window_height = 600;
	int x_1;
	int x_2;
	int y_1;
	int y_2;

public:
	Drawing();
	int get_window_height();
	int get_window_width();
	int get_delay();
	int Drawing_Random_Lines(Mat image, char* window_name, RNG rng);
	int Drawing_Random_Rectangles(Mat image, char* window_name, RNG rng);
	int Drawing_Random_Ellipses(Mat image, char* window_name, RNG rng);
	int Drawing_Random_Polylines(Mat image, char* window_name, RNG rng);
	int Drawing_Random_Filled_Polygons(Mat image, char* window_name, RNG rng);
	int Drawing_Random_Circles(Mat image, char* window_name, RNG rng);
	int Displaying_Random_Text(Mat image, char* window_name, RNG rng);
	int Displaying_Big_End(Mat image, char* window_name, RNG rng);
};

static Scalar randomColor(RNG& rng)
{
	int icolor = (unsigned)rng;
	return Scalar(icolor & 255, (icolor >> 8) & 255, (icolor >> 16) & 255);
}

#endif