#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);

    ofEnableDepthTest();

    cam.setDistance(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);
    cam.begin();

    for (int x = 0; x < 100; x++) {
      for (int y = 0; y < 100; y++) {
        z[x][y] = ofMap(ofNoise((ofGetFrameNum() + x)/10.0, (ofGetFrameNum() + y)/10.0), 0, 1, 0, 30);
      }
    }

	ofRotateX(ofRadToDeg(.5));
	ofRotateY(ofRadToDeg(-.5));

    ofBackground(0);
    ofRotate(mouseX/ofGetWidth() * 360, 0, 0, 0);

    float tx = ofGetWidth()/100;
    float ty = ofGetHeight()/100;


    ofNoFill();
    ofSetColor(255);
    ofSetLineWidth(1);
    for (int x = 0; x < 99; x++) {
      for (int y = 0; y < 99; y++) {
        ofBeginShape();
        ofVertex(x * tx, y * ty, z[x][y]);
        ofVertex((x+1) * tx, y * ty, z[x+1][y]);
        ofVertex((x+1) * tx, (y+1) * ty, z[x+1][y+1]);
        ofVertex(x * tx, y * ty, z[x][y]);
        ofEndShape();
        ofBeginShape();
        ofVertex(x * tx, y * ty, z[x][y]);
        ofVertex(x * tx, (y+1) * ty, z[x][y+1]);
        ofVertex((x+1) * tx, (y+1) * ty, z[x+1][y+1]);
        ofVertex(x * tx, y * ty, z[x][y]);
        ofEndShape();
      }
    }

    //ofFill();
    //ofSetColor(100);
    cam.end();

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
