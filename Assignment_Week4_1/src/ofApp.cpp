#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    int mouseX= 0; // these are globals
    int mouseY= 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int deltaX= ofMap (mouseX, 0, ofGetWidth(),0,50);
    int deltaY= ofMap(mouseY,0, ofGetHeight(),0,50);
    for (int y=0; y<ofGetHeight(); y+=20 + deltaY){
        for(int x=0; x<ofGetWidth(); x+=20+deltaX){
            int mouseDistX = abs(x-mouseX); // abs---> absolute value if it is negative ot turnes it into positive number
            int mouseDistY = abs (y-mouseY);
            int colorOffset = 0;
            
            if (mouseDistX < 100 && mouseDistY < 100) { // if mouseX is < 100 px away from a circle
                colorOffset = 100 + mouseDistX;
                colorOffset = 100 + mouseDistY;
            }
            
            ofSetColor(colorOffset,x/5,255);
            ofSetColor(colorOffset,y/5,255);
            ofDrawCircle(x,y,20);
        }
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

    mouseX = x; // x and y are locals or "local variables"
    mouseY = y; // local  always override globals of the same name!
    
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
