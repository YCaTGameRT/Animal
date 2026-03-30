#ifndef _CAT_H_
#define _CAT_H_

#include "Animal.h"

class Cat : public Animal {
public:
	Cat(std::string name, int age, double height, double weight, bool isStriped, bool clawsIsSharp);

	void NoseColorChoose();
	void CatLove();
	void Scamper();
protected:

private:
	bool isStriped, clawsIsSharp;
	std::string noseColor;
};

#endif