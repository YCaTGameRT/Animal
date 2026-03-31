#include <Windows.h>

#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include "FlyingCat.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Animal animal("qwerty", 12, 122, 71);
	Dog dog("wasd", 41, 33, 12, "black", 44, true);
	Cat CaT("CaT", 15, 160, 70, true, "pink", true);
	Bird bird("xyz", 120, 44, 60, "Yellow", "Dodo", false, true);
	FlyingCat flyingCat("fc", 654, 32, 6, false, "gray", false, "orange", "fox", false, false, 4, 9, "green");
	
	animal.Eat(3);
	animal.GoOlder(5);
	animal.Move(2);
	dog.RotatingAround();
	dog.RunToOwner();
	dog.TailWagging();
	CaT.CatLove();
	CaT.NoseColorChoose();
	CaT.Scamper();
	bird.BirdSing();
	bird.Fly(4);
	bird.Molting();
	flyingCat.CatLove();
	flyingCat.MyTails();
	flyingCat.Animal::Eat(13);

	system("pause");
	return 0;
}