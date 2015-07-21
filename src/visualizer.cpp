#include "visualizer.h"

#include "math.h"

#define PI 3.14159265
//--------------------------------------------------------------
visualizer::visualizer()
{
	this->x = 250;
	this->y = 250;

	fftSmoothed = new float[8192];

	for (int i = 0; i < 8192; i++){
		fftSmoothed[i] = 0;
	}

	for (int i = 0; i < 8192; i++){
		if(fftSmoothed[i] == NULL)
			printf("%f", fftSmoothed[i]);
	}
	
	nBandsToGet = 128;
}

//--------------------------------------------------------------
visualizer::visualizer(int x, int y)
{
	this->x = x;
	this->y = y;

	fftSmoothed = new float[8192];
	
	for (int i = 0; i < 8192; i++){
		fftSmoothed[i] = 0;
	}

	nBandsToGet = 128;
}

//--------------------------------------------------------------
void visualizer::update()
{
	
	// (5) grab the fft, and put in into a "smoothed" array,
	//		by taking maximums, as peaks and then smoothing downward
	float * val = ofSoundGetSpectrum(nBandsToGet);		// request 128 values for fft
	for (int i = 0;i < nBandsToGet; i++){
		// let the smoothed calue sink to zero:
		fftSmoothed[i] *= 0.96f;
		
		// take the max, either the smoothed or the incoming:
		if (fftSmoothed[i] < val[i]) fftSmoothed[i] = val[i];
		
	}
}

//--------------------------------------------------------------
void visualizer::draw()
{
	ofSetLineWidth(2);

	for (double i = 0;i < nBandsToGet; i++)
	{
		float distance = fftSmoothed[(int)i] * 200;
		if(distance > 100)distance = 100;
		float angle = (((i / nBandsToGet) * 360) -90)* (PI / 180);
		ofLine(x + 100 * cos(angle), y + 100 * sin(angle), x + (distance + 100) * cos(angle), y + (distance + 100) * sin(angle));
	}
}