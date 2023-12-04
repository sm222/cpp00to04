
#include "ClapTrap.hpp"

int main(void) {

  ClapTrap a("ass");
  ClapTrap b("butt");
  //ClapTrap *c = &b;
  a.attack(b.getName());
  a.attack(b.getName());
  b.beRepaired(5);
  a.attack(b.getName());
  a.attack(b.getName());
}