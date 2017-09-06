#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	float x = 75;
	float y = 100;
	float radius = 50;
	float tailstartx = x + radius / 4;
	float tailstarty = y + radius / 4;
	float tailendx = x + radius;
	float tailendy = y + radius;

	ofSetColor(0, 0, 0);
	ofNoFill();
	ofDrawCircle(x, y, radius);
	ofDrawLine(tailstartx, tailstarty, tailendx, tailendy);

	int length = 4;
	for (size_t i = 0; i < length; i++)
	{
		radius = radius * (mouseX + mouseY) / 1000;
		x = x + radius * 2;
		tailstartx = x + radius / 4;
		tailstarty = y + radius / 4;
		tailendx = x + radius;
		tailendy = y + radius;

		ofDrawCircle(x, y, radius);

		//x = x + radius * 3;

		ofDrawLine(tailstartx, tailstarty, tailendx, tailendy);
	}
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
