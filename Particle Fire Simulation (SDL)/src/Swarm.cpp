/*
 * Swarm.cpp
 *
 *  Created on: Jan. 3, 2019
 *      Author: Yousif
 */

#include "Swarm.h"

namespace fire {

Swarm::Swarm(): lastTime(0) {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete[] m_pParticles;
}
void Swarm::update(int elapsed) {
	int interval = elapsed - lastTime;


	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_pParticles[i].update(interval);
	}

	lastTime = elapsed;
}
}
