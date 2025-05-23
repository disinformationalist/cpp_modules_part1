#include "Dog.hpp"

/***constructors, destructors***/

Dog::Dog() : Animal::Animal("Dog")
{
	_type = "Dog";
	std::cout << "Dog Constructor has been called" << std::endl;
}

Dog::Dog( const Dog& other) : Animal::Animal(other)
{
	std::cout << "Dog Copy Constructor has been called" << std::endl;
	*this = other;
}

Dog&	Dog::operator=( const Dog& other )
{
	std::cout << "Dog Assignment operator has been called" << std::endl;
	if (this != &other)
		_type = other._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor has been called" << std::endl;
}

/**member functions**/

void Dog::makeSound() const
{
	std::cout << "Ruff" << std::endl;
}