/*
 * Particle.cpp
 *
 *  Created on: Jan. 3, 2019
 *      Author: Yousif
 */

#include "Particle.h"
#include <stdlib.h>

namespace fire {

Particle::~Particle() {
	m_x = (2.0 * rand())/RAND_MAX - 1;
	m_y = (2.0 * rand())/RAND_MAX - 1;
}

Particle::Particle() {


}

} /* namespace fire */
