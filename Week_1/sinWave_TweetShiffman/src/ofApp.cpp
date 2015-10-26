#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  theta = 0.0;
  amplitude = 175.0;
  period = 500.0;

  dx = (PI * 2 / period) * 8;

  ofSetBackgroundAuto(true);

  ofSetFrameRate(40);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 10);

    calcWave();
    renderWave();
}

void ofApp::calcWave() {
  theta += 0.02;

  float x = theta;
  for(int i = 0; i < 77; i++) {
    yvalues[i] = sin(x) * amplitude;
    x += dx;
  }
}

void ofApp::renderWave() {
  for(int x = 0; x < 77; x++) {
    ofColor cTmp;

    ofFill();
    cTmp.setHsb(yvalues[x],255,255,1);
    ofSetColor(cTmp);
    ofEllipse(x*8, 600/2+yvalues[x], yvalues[(x+x)%77], yvalues[(x+x+x)%77]);

    ofNoFill();
    cTmp.setHsb(x, 255, 255, 200);
    ofSetColor(cTmp);
    ofEllipse(x*8, 600/2+yvalues[x], yvalues[(x+x)%77], yvalues[(x+x+x)%77]);
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
