#include "Cat.hpp"

/***constructors, destructors***/

Cat::Cat() : Animal::Animal("Cat")
{
	_type = "Cat";
	std::cout << "Cat Constructor has been called" << std::endl;
}

Cat::Cat( const Cat& other) : Animal::Animal(other)
{
	std::cout << "Cat Copy Constructor has been called" << std::endl;
	*this = other;
}

Cat&	Cat::operator=( const Cat& other )
{
	std::cout << "Cat Assignment operator has been called" << std::endl;
	if (this != &other)
		_type = other._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor has been called" << std::endl;
}

/**member functions**/

void Cat::makeSound() const
{
	std::cout << "Roar" << std::endl;
}