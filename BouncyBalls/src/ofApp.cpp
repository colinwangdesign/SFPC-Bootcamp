#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	speed = 1;
	x = ofGetWidth() / 2;
	y = ofGetHeight() / 2;
	velocityx = speed;
	velocityy = speed;
}

//--------------------------------------------------------------
void ofApp::update(){

	x = x + velocityx;
	y =	y + velocityy;

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

//--------------------------------------------------------------
void ofApp::draw(){

	ofBackground(25);

	//ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, 10);

	ofDrawCircle(x, y, 10);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
