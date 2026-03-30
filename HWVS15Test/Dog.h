#ifndef _DOG_H_
#define _DOG_H_

#include "Animal.h"

class Dog : public Animal {
public:
	Dog(std::string name, int age, double height, double weight, std::string coatColor, double tailLengt, bool isHappy);

	void TailWagging();
	void RunToOwner();
	void RotatingAround();
protected:

private:
	std::string coatColor;
	double tailLengt;
	bool isHappy;
};

#endif