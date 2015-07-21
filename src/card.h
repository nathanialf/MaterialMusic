#pragma once

#include "ofMain.h"

class card
{
	private:
		ofColor primary_dark, background_dark, secondary_dark;
		int x, y, w, h;
	
	public:
		card();
		card(int, int, int, int);
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
