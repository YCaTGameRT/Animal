#include "Animal.h"

Animal::Animal(std::string name, int age, double height, double weight) {
	this->name = name;
	this->age = age;
	this->height = height;
	this->weight = weight;
}

void Animal::Move(double km) {
	std::cout << "Животное " << name << " прошло " << km << "км\n";
}
void Animal::Eat(double kg) {
	std::cout << "Животное " << name << " съело " << kg << "кг\n";
	weight += kg;
}
void Animal::GoOlder(int years) {
	std::cout << "Животное " << name << " постарело на " << years << "лет\n";
	age += years;
}