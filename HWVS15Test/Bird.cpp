#include "Bird.h"

Bird::Bird(std::string name, int age, double height, double weight, std::string featherColor, std::string species, bool flying, bool extinct) : Animal(name, age, height, weight) {
	this->featherColor = featherColor;
	this->species = species;
	this->flying = flying;
	this->extinct = extinct;
}

void Bird::Fly(double km) {
	flying ? std::cout << "ѕтица " << name << " пролетела " << km << " км\n" : std::cout << "ѕтица " << name << " прошла " << km << " км, т.к. не умеет летать :c\n";
}
void Bird::Molting() {
	std::cout << "ѕтица " << name << " полен€ла\n";
}
void Bird::BirdSing() {
	std::cout << "ѕтица " << name << " поЄт\n";
}