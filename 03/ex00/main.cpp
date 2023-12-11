
#include "ClapTrap.hpp"

int main(void) {

  ClapTrap raph("raph");
  ClapTrap zac("zac");

  zac.attack(raph.getName());
  raph.beRepaired(1);
  raph.attack(zac.getName());
  zac.beRepaired(1);
}