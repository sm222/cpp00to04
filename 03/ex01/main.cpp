
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

  ClapTrap raph("raph");
  ScavTrap zac("zac");

  zac.guardGate();
  raph.beRepaired(11);
  zac.attack(raph.getName());
  raph.takeDamage(20);
  raph.attack(zac.getName());
  zac.beRepaired(1);
  zac.attack(raph.getName());
  raph.takeDamage(20);
  zac.guardGate();
}