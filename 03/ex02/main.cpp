
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {

  ClapTrap raph("raph");
  ScavTrap zac("zac");
  FragTrap oli("oli");

  oli.attack(zac.getName());
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