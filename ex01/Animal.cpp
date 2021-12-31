#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &tmp) : type(tmp.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::Animal(const std::string name) : type(name)
{
	std::cout << "Animal name constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal  &Animal::operator=(const Animal &tmp)
{
	type = tmp.type;
	std::cout << "Animal Assignation operator called" << std::endl;
	return (*this);
}

std::string		Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << type << " : ????????????????" << std::endl;
}