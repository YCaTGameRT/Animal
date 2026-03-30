#include <Windows.h>

#include "Dog.h"
#include "Cat.h"
#include "Bird.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Bird one("CaT", 120, 44, 60, "Yellow", "Dodo", false, true);
	one.Move(13);
	one.Fly(22);

	system("pause");
	return 0;
}