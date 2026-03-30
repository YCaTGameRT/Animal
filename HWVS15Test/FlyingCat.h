#ifndef _FLYINGCAT_H_
#define _FLYINGCAT_H_

#include "Cat.h"
#include "Bird.h"

class FlyingCat : public Cat, Bird {
public:
	FlyingCat(std::string name, int age, double height, double weight, bool isStriped, std::string noseColor, bool clawsIsSharp, std::string featherColor, std::string species, bool flying, bool extinct, int numberOfWings, int numberOfTails, std::string eyeColor);

	void MyWings();
	void MyTails();
	void MyEyeColor();
protected:

private:
	int numberOfWings, numberOfTails;
	std::string eyeColor;
};

#endif