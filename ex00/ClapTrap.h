#ifndef CLAPTRAP_H
# define CLAPTRAP_H


#include <iostream>


class ClapTrap
{
    private:
        std::string name;
        int         energy;
        int         damage;
        int         hitpoint;
    public:
        ClapTrap(/* args */);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif