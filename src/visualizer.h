#pragma once

#include "ofMain.h"

class visualizer
{
	private:
		int x, y;
	public:
		visualizer();
		visualizer(int, int);
		void update();
		void draw();

		float * fftSmoothed;

		int nBandsToGet;
};