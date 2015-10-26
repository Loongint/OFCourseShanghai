#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(255);
  ofSetVerticalSync(true);

  movie.loadMovie("test.mov");
  movie.play();

  imgg.loadImage("1.jpg");

  finder.setup("haarcascade_frontalface_default.xml");
  finder.setScaleHaar(2);

  face = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
  movie.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  face = 0;

  ofSetHexColor(0xFFFFFF);
  movie.draw(20,20);
  //imgg.draw(0,0);
  finder.findHaarObjects(movie.getPixelsRef());
  //finder.findHaarObjects(imgg);
  cout<<"frame"<<ofGetFrameNum<<endl;
  cout<<endl;
  ofSetColor(255,0,0);
  ofSetLineWidth(4);
  ofNoFill();
  for(unsigned int i = 0; i < finder.blobs.size(); i++) {
    ofRectangle cur = finder.blobs[i].boundingRect;

    if(cur.height > 200) {
      ofRect(cur.x, cur.y, cur.width, cur.height);
      face++;
    }
  }
  cout<<face<<endl;

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
