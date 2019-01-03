/*
 * Animals.h
 *
 *  Created on: Dec. 27, 2018
 *      Author: Yousif
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_
#include <iostream>
using namespace std;

namespace ygk {
const string CATNAME = "Bob";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace ygk */

#endif /* ANIMALS_H_ */
