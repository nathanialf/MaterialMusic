#pragma once

#include "ofMain.h"
#include "card.h"

class footer
{
	private:
		ofColor primary;
		int x, y, w, h;

	public:
		footer();
		footer(int, int, int, int);
		void setup();
		void update();
		void draw();
		
		void setX(int);
		void setY(int);
		void setWidth(int);
		void setHeight(int);
		
		int getX();
		int getY();
		int getWidth();
		int getHeight();
};