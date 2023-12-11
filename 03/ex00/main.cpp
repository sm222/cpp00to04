
#include "ClapTrap.hpp"

int main(void) {

  ClapTrap raph("raph");
  ClapTrap zac("zac");
  //ClapTrap *c = &b;
  raph.attack(zac.getName());
  raph.attack(zac.getName());
  raph.beRepaired(5);
  raph.attack(zac.getName());
  raph.attack(zac.getName());
}