#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);

    ofBackground(0);

    ofSetColor(ofRandom(255));
    ofNoFill();
    px = ofRandom(500);
    py = ofRandom(500);
    densidade = 50;
    brush = ofRandom(px, py);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    densidade = ofRandom(50);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
  for(int i=0; i<ofGetWidth(); i+=500){
    ofCircle(mouseX+ofRandom(-brush,brush),mouseY+ofRandom(-brush,brush),ofRandom(40), ofRandom(40));
    ofSetLineWidth(ofRandom(40));
    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255),ofRandom(40,180));
    ofLine(mouseX+ofRandom(-brush,brush),py,px,mouseY+ofRandom(-brush,brush));
    ofTriangle(mouseX+ofRandom(-brush,brush),px,px,py,py,mouseY+ofRandom(-brush,brush));
    }
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
