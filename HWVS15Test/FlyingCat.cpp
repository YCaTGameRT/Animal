#include "FlyingCat.h"

FlyingCat::FlyingCat(std::string name, int age, double height, double weight, bool isStriped, std::string noseColor, bool clawsIsSharp, std::string featherColor, std::string species, bool flying, bool extinct, int numberOfWings, int numberOfTails, std::string eyeColor) : Cat(name, age, height, weight, isStriped, noseColor, clawsIsSharp), Bird(name, age, height, weight, featherColor, species, flying, extinct) {
	this->numberOfWings = numberOfWings;
	this->numberOfTails = numberOfTails;
	this->eyeColor = eyeColor;
}

void FlyingCat::MyWings() {
	std::cout << "У меня " << numberOfWings << " крыльев\n";
}
void FlyingCat::MyTails() {
	std::cout << "У меня " << numberOfTails << " хвостов\n";
}
void FlyingCat::MyEyeColor() {
	std::cout << "Мои глаза " << eyeColor << " цвета\n";
}