/*
 * Swarm.cpp
 *
 *  Created on: Jan. 3, 2019
 *      Author: Yousif
 */

#include "Swarm.h"

namespace fire {

Swarm::Swarm() {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

} /* namespace fire */
