/*
 * Particle.cpp
 *
 *  Created on: Jan. 3, 2019
 *      Author: Yousif
 */

#include "Particle.h"
#include <math.h>
#include <stdlib.h>
#include "Screen.h"

namespace fire {

Particle::~Particle() {

}

Particle::Particle(): m_x(0), m_y(0) {
	m_direction =  (2.0 * M_PI * rand())/RAND_MAX;
	m_speed = (0.0003 * rand())/RAND_MAX;
}

void Particle::update(int interval) {
	double xspeed = m_speed * cos(m_direction);
	double yspeed = m_speed * sin(m_direction);

	m_x += xspeed * interval;
	m_y += yspeed * interval;


}

} /* namespace fire */
