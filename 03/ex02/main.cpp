
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
  ClapTrap raph("raph");
  ScavTrap zac("zac");
  //ClapTrap *c = &b;
  raph.attack(zac.getName());
  raph.attack(zac.getName());
  raph.beRepaired(5);
  raph.attack(zac.getName());
  raph.attack(zac.getName());
}