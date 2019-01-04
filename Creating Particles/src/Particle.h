
#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace fire {

struct Particle {
	double m_x;
	double m_y;

public:
	virtual ~Particle();
	Particle();
};

}

#endif /* PARTICLE_H_ */
