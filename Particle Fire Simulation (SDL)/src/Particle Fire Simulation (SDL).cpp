//============================================================================
// Name        : Particle Fire Simulation
// Author      : Yousif Kzeer
// Version     : 1.0
// Description : C++ Particle Fire Simulation using SDL
//============================================================================

#include <iostream>
#include <SDL.h>
#include <math.h>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Swarm.h"
#include "Particle.h"
using namespace std;
using namespace fire;

int main(int argc, char* argv[]) {

	srand(time(NULL));

	Screen screen;
	if (screen.init() == false) {
		cout << "Error initializing SDL." << endl;
	}

	Swarm swarm;

	while (true) {
		// Update particles
		// Draw particles
		int elapsed = SDL_GetTicks();

		swarm.update(elapsed);

		unsigned char green = (1 + sin(elapsed * 0.0003)) * 128;
		unsigned char red = (1 + sin(elapsed * 0.001)) * 128;
		unsigned char blue = (1 + sin(elapsed * 0.0004)) * 128;

		const Particle * const pParticles = swarm.getParticles();

		for (int i = 0; i < Swarm::NPARTICLES; i++) {
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = particle.m_y * Screen::SCREEN_WIDTH / 2 + Screen::SCREEN_HEIGHT/2;


			screen.setPixel(x, y, red, green, blue);
		}
		screen.boxBlur();

		screen.update();

		if (!screen.processEvents()) {
			break;
		}

	}

	screen.close();

	return 0;
}
