#include "ClapTrap.h"

int main( void )
{
    ClapTrap    a("Franz Kafka");

    a.attack("Metroid");
	a.takeDamage(10);
	a.beRepaired(10);

	a.takeDamage(10);
	a.attack("Metroid");

	return (0);
}