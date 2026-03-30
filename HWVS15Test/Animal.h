#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>
#include <iostream>

class Animal {
public:
	Animal(std::string name, int age, double height, double weight);

	void Move(double km);
	void Eat(double kg);
	void GoOlder(int years);
protected:
	int age;
	double height, weight;
	std::string name;
private:

};

#endif