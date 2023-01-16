#include "ClapTrap.h"



ClapTrap::ClapTrap()
{
    this->damage = 0;
    this->energy = 10;
    this->hitpoint = 10;
    this->name = "ClapTrap";
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &other)
{
    this->damage = other.damage;
    this->energy = other.energy;
    this->name = other.name;
    return *this;
}


ClapTrap::ClapTrap(std::string name)
{
    this->damage = 0;
    this->energy = 10;
    this->hitpoint = 10;
    this->name = name;
    std::cout << "ClapTrap 2nd Constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hitpoint > 0 && this->energy > 0)
    {
        //ClapTrap <name> attacks <target>, causing <damage> points of damage!
        std::cout << "ClapTrap " + this->name << " attacks " + target << " causing " <<  this->damage <<  " points of damage!" << std::endl;
        this->energy--;
    }
    else if (this->hitpoint < 0)
        std::cout << "Not enough hitpoint!" << std::endl;
    else
        std::cout << "not enough energy! s" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((int)(this->hitpoint - amount) > 0)
    {
        std::cout << this->name + " hitted" <<  std::endl;
        this->hitpoint -= amount;
    }
    else
    {
        this->hitpoint = 0;
        std::cout << this->name + " is died" <<  std::endl;
    }

}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy > 0 && this->hitpoint > 0)
    {
        this->energy--;
        this->hitpoint += amount;
        std::cout << this->name + " healed" << std::endl; 
    }
    else
        std::cout << this->name + " cant be healed" << std::endl; 
}

