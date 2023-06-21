#include "DogCat.h"
#include <iostream>

Dog::Dog(const std::string& name, const std::string& breed, int age) : name(name), breed(breed), age(age) {};
Dog::~Dog() {};

std::string Dog::getName() const {
	return name;
};
void Dog::setName(const std::string& name) {
	this->name = name;
};
std::string Dog::getBreed() const {
	return breed;
};
void Dog::setBreed(const std::string& breed) {
	this->breed = breed;
};
int Dog::getAge() const {
	return age;
};
void Dog::setAge(int age) {
	this->age = age;
};
void Dog::bark() const {
	std::cout << "Woof! Woof!" << std::endl;
};
void Dog::getDogInfo() const {
	std::cout << name << ", " << breed << ", " << age << std::endl;
};

Cat::Cat(const std::string& name, const std::string& color, int age) : name(name), color(color), age(age) {};
Cat::~Cat() {};

std::string Cat::getName() const {
	return name;
};
void Cat::setName(const std::string& name) {
	this->name = name;
};
std::string Cat::getColor() const {
	return color;
};
void Cat::setColor(const std::string& color) {
	this->color = color;
};
int Cat::getAge() const {
	return age;
};
void Cat::setAge(int age) {
	this->age = age;
};
void Cat::meow() const {
	std::cout << "Meow! Meow!" << std::endl;
};
void Cat::getCatInfo() const {
	std::cout << name << ", " << color << ", " << age << std::endl;
};