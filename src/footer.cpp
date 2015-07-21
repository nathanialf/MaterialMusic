#include "footer.h"
#include <stdio.h>

footer::footer()
{
	this->setX(0);
	this->setY(0);
	this->setWidth(0);
	this->setHeight(0);
	
	primary = ofColor(76, 175, 80);
}

footer::footer(int x, int y, int w, int h)
{
	this->setX(x);
	this->setY(y);
	this->setWidth(w);
	this->setHeight(h);
	
	primary = ofColor(76, 175, 80);
}

void footer::setup()
{
}
void footer::update()
{
}
void footer::draw()
{
	ofSetColor(primary);
	ofRect(this->getX(), this->getY(), this->getWidth(), this->getHeight());
	//ofLine(this->getX(), this->getY() + this->getHeight() + 1, this->getX() + this->getWidth(), this->getY() + this->getHeight() + 1);
}
		
void footer::setX(int x)
{
	this->x = x;
}
void footer::setY(int y)
{
	this->y = y;
}
void footer::setWidth(int w)
{
	this->w = w;
}
void footer::setHeight(int h)
{
	this->h = h;
}
		
int footer::getX()
{
	return this->x;
}
int footer::getY()
{
	return this->y;
}
int footer::getWidth()
{
	return this->w;
}
int footer::getHeight()
{
	return this->h;
}