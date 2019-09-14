#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowShape(1000, 1000);
	ofSetWindowPosition(100, 100);
	shader.load("shadersGL3/shader");

    int planeWidth = ofGetWidth();
    int planeHeight = ofGetHeight();
    int planeGridSize = 20;
    int planeColums = planeWidth / planeGridSize;
    int planeRows = planeHeight / planeGridSize;
    
    plane.set(planeWidth, planeHeight, planeColums, planeRows, OF_PRIMITIVE_TRIANGLES);
	ofBackground(ofColor(250.0, 250.0, 250.0, 255.0));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	cam.begin();
    shader.begin();
    
    // center screen.
    float cx = ofGetWidth() / 2.0;
    float cy = ofGetHeight() / 2.0;

    float mx = mouseX - cx;
    float my = mouseY - cy;
    
    shader.setUniform1f("mouseRange", 150);
    shader.setUniform2f("mousePos", mx, my);
    
    float percentX = mouseX / (float)ofGetWidth();
    percentX = ofClamp(percentX, 0, 1);
    ofFloatColor colorLeft = ofColor::magenta;
    ofFloatColor colorRight = ofColor::blue;
    ofFloatColor colorMix = colorLeft.getLerped(colorRight, percentX);
    
    float mouseColor[4] = {colorMix.r, colorMix.g, colorMix.b, colorMix.a};
    
    shader.setUniform4fv("mouseColor", mouseColor);
    
    //ofTranslate(cx, cy);
	ofSetCylinderResolution(200, 200, 2);
	for (int i = 0; i < 20; i++) {
		glPushMatrix();
		//ofRotateX(i + ofGetFrameNum() * 0.07);
		//ofRotateY(i + ofGetFrameNum() * 0.02);
		ofRotateZ(i + ofGetFrameNum() * 0.02);
		//ofDrawCylinder(340 - 20 * i, 340 - 20 * i);
		ofBox(430 - 20 * i);
		glPopMatrix();
	}
    shader.end();
	cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	ofSaveFrame(true);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
