#pragma once

#include "ofMain.h"

class slider
{
	private:
		int x, y, l;
	
	public:
		slider();
		slider(int, int, int, bool);
		void setup();
		void update();
		void draw();
		
		void setX(int);
		void setY(int);
		void setLength(int);
		
		int getX();
		int getY();
		int getLength();

		bool isHorizontal;

		float position;
};
