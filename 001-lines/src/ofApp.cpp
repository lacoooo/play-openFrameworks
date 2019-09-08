#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup(){
	//ofNoFill();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float cx = ofGetWidth() / 2;
	float cy = ofGetHeight() / 2;
	float radius = 300.0;
	for (int i = 0; i < 100; i+=1) {
		ofPushMatrix();
		ofSetColor(ofColor(abs(sin(i + 20.0 + time / 10.0) * 250.0), abs(sin(i + 40.0 + time / 10.0) * 250.0), abs(sin(i + time / 10.0) * 250.0)));
		ofTranslate(
			cx + sin((i + time / 10.0) / 4.0) * radius
			+ sin((i + time / 20.0) * 8.0) * radius / 8.0
			,
			cy + cos((i + time / 10.0) / 4.0) * radius
			+ cos((i + time / 20.0) * 8.0) * radius / 8.0
		);
		ofRotate((i + time / 100.0) * 100.0);
		ofDrawBox(20.0 + sin(i + time / 10.0));
		ofPopMatrix();
	}
	time+= 0.1;
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
