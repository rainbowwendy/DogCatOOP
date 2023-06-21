#pragma once
#include <string>

class Dog {
private:
	std::string name;
	std::string breed;
	int age;
public:
	Dog(const std::string& name, const std::string& breed, int age);
	~Dog();
	std::string getName() const;
	void setName(const std::string& name);
	std::string getBreed() const;
	void setBreed(const std::string& breed);
	int getAge() const;
	void setAge(int age);
	void bark() const;
	void getDogInfo() const;
};

class Cat {
private:
	std::string name;
	std::string color;
	int age;
public:
	Cat(const std::string& name, const std::string& color, int age);
	~Cat();
	std::string getName() const;
	void setName(const std::string& name);
	std::string getColor() const;
	void setColor(const std::string& color);
	int getAge() const;
	void setAge(int year);
	void meow() const;
	void getCatInfo() const;
};