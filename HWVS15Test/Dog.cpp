#include "Dog.h"

Dog::Dog(std::string name, int age, double height, double weight, std::string coatColor, double tailLengt, bool isHappy) : Animal(name, age, height, weight) {
	this->coatColor = coatColor;
	this->tailLengt = tailLengt;
	this->isHappy = isHappy;
}

void Dog::TailWagging() {
	isHappy ? std::cout << "Собака " << name << " машет хвостом\n" : std::cout << "ССобака " << name << " не машет хвостом ведь она не счастлива\n";
}
void Dog::RunToOwner() {
	std::cout << "Собака " << name << " бежит к хозяйну\n";
}
void Dog::RotatingAround() {
	std::cout << "Собака " << name << " крутится по кругу\n";
}