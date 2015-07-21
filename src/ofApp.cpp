#include "ofApp.h"

#include "card.h"
#include "footer.h"

ofColor primary_dark, background_dark, secondary_dark;

card information_card;
footer controls_footer;

double padding_percentage = .005;
double footer_percentage = .05;
//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetCircleResolution(100);
	primary_dark = ofColor(99, 99, 99);
	secondary_dark = ofColor(66, 66, 66);
	background_dark = ofColor(33, 33, 33);
	information_card = card(0, 0, 0, 0);
	controls_footer = footer(0, 0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update()
{
	information_card.update();
	information_card.setX(ofGetHeight() * padding_percentage);
	information_card.setY(ofGetHeight() * padding_percentage);
	information_card.setWidth(ofGetWidth() / 5);
	information_card.setHeight( ofGetHeight() - (ofGetHeight() * footer_percentage) - ((ofGetHeight() * padding_percentage) * 2));

	controls_footer.update();
	controls_footer.setY(ofGetHeight() - (ofGetHeight() * footer_percentage));
	controls_footer.setWidth(ofGetWidth());
	controls_footer.setHeight(ofGetHeight() * footer_percentage);
}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofBackground(background_dark);
	information_card.draw();
	controls_footer.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{ 

}
