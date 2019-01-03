//============================================================================
// Name        : SDLTest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include <cstring>
#include "Screen.h"
using namespace std;
using namespace fire;

int main(int argc, char* argv[]) {

	Screen screen;
	if (screen.init() == false) {
		cout << "Error initializing SDL." << endl;
	}

	while (true) {
		// Update particles
		// Draw particles
		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++) {
				screen.setPixel(x, y, 255, 255, 255);
			}
		}

		while (true) {
			// Update particles
			// Draw particles
			for (int y = 200; y<400; y++) {
					for (int x = 300; x < 500; x++) {
						screen.setPixel(x, y, 255, 64, 128);
					}
				}
			}
			screen.update();

			if (!screen.processEvents()) {
				break;
			}

		}
		screen.close();

		return 0;
	}
