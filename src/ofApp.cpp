//OPENFRAMEWORKS INCLUDES
#include "ofApp.h"
//WRITTEN INCLUDES
#include "card.h"
#include "footer.h"
#include "visualizer.h"
#include "slider.h"
//C/C++ INCLUDES
#include "math.h"

#define PI 3.14159265

ofColor primary_dark, background_dark, secondary_dark;

card information_card;
footer controls_footer;
visualizer vis = visualizer(250, 250);
slider pos_slider;

double padding_percentage = .005;
double footer_percentage = .05;

ofSoundPlayer sound_player;
//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetCircleResolution(100);
	primary_dark = ofColor(99, 99, 99);
	secondary_dark = ofColor(66, 66, 66);
	background_dark = ofColor(33, 33, 33);
	information_card = card(0, 0, 0, 0);
	controls_footer = footer(0, 0, 0, 0);
	pos_slider = slider(0,0,0, true);
	
	// load in sounds:
	sound_player.loadSound("\\\\192.168.0.7\\Camel\\Music\\Giorgio Moroder\\Deja Vu\\08. tom's diner (feat. britney spears).mp3");
	sound_player.setVolume(.1);
	sound_player.play();
}

//--------------------------------------------------------------
void ofApp::update()
{
	// update the sound playing system:
	ofSoundUpdate();

	pos_slider.position = sound_player.getPosition();

	pos_slider.update();

	vis.update();
	information_card.update();
	information_card.setX(ofGetHeight() * padding_percentage);
	information_card.setY(ofGetHeight() * padding_percentage);
	information_card.setWidth(ofGetWidth() / 5);
	information_card.setHeight( ofGetHeight() - (ofGetHeight() * footer_percentage) - ((ofGetHeight() * padding_percentage) * 2));

	controls_footer.update();
	controls_footer.setY(ofGetHeight() - (ofGetHeight() * footer_percentage));
	controls_footer.setWidth(ofGetWidth());
	controls_footer.setHeight(ofGetHeight() * footer_percentage);
	
	pos_slider.setX(ofGetWidth() * .2);
	pos_slider.setY((controls_footer.getHeight() /  2) + controls_footer.getY());
	pos_slider.setLength(ofGetWidth() * .7);
}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofBackground(background_dark);
	information_card.draw();
	controls_footer.draw();
	
	vis.draw();

	pos_slider.draw();
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
