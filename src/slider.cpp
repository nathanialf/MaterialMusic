#include "slider.h"


slider::slider()
{
	this->setX(0);
	this->setY(0);
	this->setLength(0);
	this->isHorizontal = false;
}

slider::slider(int x, int y, int l, bool h)
{
	this->setX(x);
	this->setY(y);
	this->setLength(l);
	this->isHorizontal = h;
}

void slider::setup()
{
}
void slider::update()
{
}
void slider::draw()
{
	ofSetLineWidth(5);
		ofSetColor(255,255,255,50);
		ofLine(this->getX(), this->getY(), this->getX() + this->getLength(), this->getY());
		ofSetColor(255,255,255);
		ofLine(this->getX(), this->getY(), this->getX() + (this->getLength() * position), this->getY());
}
		
void slider::setX(int x)
{
	this->x = x;
}
void slider::setY(int y)
{
	this->y = y;
}
void slider::setLength(int l)
{
	this->l = l;
}
		
int slider::getX()
{
	return this->x;
}
int slider::getY()
{
	return this->y;
}
int slider::getLength()
{
	return this->l;
}