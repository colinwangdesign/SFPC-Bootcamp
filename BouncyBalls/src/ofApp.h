#pragma once

#include "ofMain.h"

class Ball{
public:
	float x;
	float y;
	float radius;
	float velocityx;
	float velocityy;
	float speed;

	void setup(float xIn, float yIn){
		speed = 1;
		x = xIn;
		y = yIn;
		radius = 10;
		velocityx = speed;
		velocityy = speed;
	}


	void update(){
		x = x + velocityx;
		y = y + velocityy;

		if (x > ofGetWidth())
		{
			velocityx = -speed;
		}

		if (x < 0)
		{
			velocityx = speed;
		}

		if (y > ofGetHeight())
		{
			velocityy = -speed;
		}

		if (y < 0)
		{
			velocityy = speed;
		}
	}


	void draw(){
		
		ofDrawCircle(x, y, radius);

	}
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		Ball bouncyballs[100];


};
