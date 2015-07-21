#include "card.h"


card::card()
{
	this->setX(0);
	this->setY(0);
	this->setWidth(0);
	this->setHeight(0);
	
	primary_dark = ofColor(99, 99, 99);
	secondary_dark = ofColor(66, 66, 66);
	background_dark = ofColor(33, 33, 33);
}

card::card(int x, int y, int w, int h)
{
	this->setX(x);
	this->setY(y);
	this->setWidth(w);
	this->setHeight(h);
	
	primary_dark = ofColor(99, 99, 99);
	secondary_dark = ofColor(66, 66, 66);
	background_dark = ofColor(33, 33, 33);
}

void card::setup()
{
}
void card::update()
{
}
void card::draw()
{
	ofSetColor(primary_dark);
	ofRectRounded(this->getX(), this->getY(), this->getWidth(), this->getHeight(), 2);
	ofSetColor(secondary_dark);
	//ofLine(this->getX(), this->getY() + this->getHeight() + 1, this->getX() + this->getWidth(), this->getY() + this->getHeight() + 1);
}
		
void card::setX(int x)
{
	this->x = x;
}
void card::setY(int y)
{
	this->y = y;
}
void card::setWidth(int w)
{
	this->w = w;
}
void card::setHeight(int h)
{
	this->h = h;
}
		
int card::getX()
{
	return this->x;
}
int card::getY()
{
	return this->y;
}
int card::getWidth()
{
	return this->w;
}
int card::getHeight()
{
	return this->h;
}