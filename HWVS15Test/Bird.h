#ifndef _BIRD_H_
#define _BIRD_H_

#include "Animal.h"

class Bird : public Animal {
public:
	Bird(std::string name, int age, double height, double weight, std::string featherColor, std::string species, bool flying, bool extinct);

	void Fly(double km);
	void Molting();
	void BirdSing();
protected:

private:
	std::string featherColor, species;
	bool flying, extinct;
};

#endif