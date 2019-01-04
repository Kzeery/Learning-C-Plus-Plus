#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace fire {

struct Particle {
	double m_x;
	double m_y;
private:
	double m_speed;
	double m_direction;
public:
	virtual ~Particle();
	Particle();
	void update(int interval);
private:
	void init();
};

}

#endif /* PARTICLE_H_ */
