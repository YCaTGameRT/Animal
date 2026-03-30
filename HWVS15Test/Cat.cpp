#include "Cat.h"

Cat::Cat(std::string name, int age, double height, double weight, bool isStriped, bool clawsIsSharp) : Animal(name, age, height, weight) {
	this->isStriped = isStriped;
	noseColor = "pink";
	this->clawsIsSharp = clawsIsSharp;
}

void Cat::NoseColorChoose() {
	int choose;
	std::cout << "Это крутой метод для выбора цвета носа кота\nТекущий кот: " << name << "\nВыберите цвет носа:\n1. розовый\n2. серый\n3. чёрный\n4. пятнистый\n>>: ";
	std::cin >> choose;
	switch (choose) {
	case 1:
		break;
	case 2:
		noseColor = "gray";
		break;
	case 3:
		noseColor = "black";
		break;
	case 4:
		noseColor = "spotted";
		break;
	}
}
void Cat::CatLove() {
	std::cout << "Кот " << name << " запрыгнул на колени и мурлыкает\n";
}
void Cat::Scamper() {
	std::cout << "Кот " << name << " делает тыгыдык-тыгыдык в 05:00\n";
}