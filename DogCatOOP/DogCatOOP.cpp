// DogCatOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "DogCat.h"
#include <iostream>

int main()
{
	std::cout <<"* Dog\n";
	Dog dog("Choco", "Puddle", 3);

	std::cout << "Name: " << dog.getName() << "\n";
	std::cout << "Breed: " << dog.getBreed() << "\n";
	std::cout << "Age: " << dog.getAge() << "\n";
	
	dog.bark();
	dog.getDogInfo();

	std::cout << "\n\n";
	std::cout << "* Cat\n";

	Cat cat("Stella", "Black", 1);

	std::cout << "Name: " << cat.getName() << "\n";
	std::cout << "Color: " << cat.getColor() << "\n";
	std::cout << "Age: " << cat.getAge() << "\n";

	cat.meow();
	cat.getCatInfo();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
