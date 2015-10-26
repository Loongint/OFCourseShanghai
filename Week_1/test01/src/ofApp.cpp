#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    circleX = ofGetWidth()/2;
    circleY = ofGetHeight()/2;
    circleSize = 0;

    ofNoFill();

    i = 0;

    ofSetBackgroundAuto(false);

    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotate(i);

    ofCircle(0, 0, circleSize);
    ofPopMatrix();
    biubiubiu("biu");
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    ofSetColor(ofMap(x, 0 ,500, 100, 255), ofMap(y, 0 ,500, 0, 155), ofMap(x*y, 0, 250000, 255, 0) , 99);

    circleX = x;
    circleY = y;
    circleSize = ofMap(x, 0, 500, 0, 200);

    ofSetCircleResolution(ofMap(y, 0, 500, 3, 9));

    i += .1;

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

void ofApp::biubiubiu(string s) {
  cout << s << endl;
}
