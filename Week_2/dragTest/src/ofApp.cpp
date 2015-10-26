#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  draggedImageFlag = false;

  ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  if(draggedImageFlag == true) {
     ofColor pixCol_1(100,100,255);
     ofColor pixCol_2(235,23,47);

     ofFill();
     ofSetColor(pixCol_1);
     img1.draw(0,0,400,400);
     img1.draw(400,400,400,400);
     ofSetColor(pixCol_2);
     img2.draw(0,400,400,400);
     img2.draw(400,0,400,400);

     ofSetLineWidth(4);
     ofSetColor(255);
     ofNoFill();
     ofCircle(400,400,200);
     ofLine(300,300,500,500);
     ofLine(500,300,300,500);

     cout<< mouseX <<","<<mouseY<<endl;
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
void ofApp::dragEvent(ofDragInfo info){
  if(info.files.size() > 0) {
    cout << info.files.size() << endl;
    if (info.files.size() > 1) {
      draggedImageFlag = true;
      img1.loadImage(info.files[0]);
      img2.loadImage(info.files[1]);
    }
  }
}
