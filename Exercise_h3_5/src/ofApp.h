#pragma once

#include "ofMain.h"
#include "Raket.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);

		int toets;
		vector <Raket> Rakets; 
		int hoeveelheid; 
};
