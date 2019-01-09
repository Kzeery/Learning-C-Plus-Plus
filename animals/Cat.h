/*
 * Cat.h
 *
 *  Created on: Jan. 4, 2019
 *      Author: Yousif
 */

#ifndef CAT_H_
#define CAT_H_

namespace caveofprogramming {

void saySomething();

class Cat {
public:
	Cat();
	void speak();
	virtual ~Cat();
};

}
#endif /* CAT_H_ */
