
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

  ClapTrap a("ass");
  ClapTrap b("butt");
  //ClapTrap *c = &b;
  a.attack(b.getName());
  a.attack(b.getName());
  b.beRepaired(5);
  a.attack(b.getName());
  a.attack(b.getName());
  ScavTrap tata("tata");
  tata.attack(a.getName());
  tata.guardGate();
  tata.beRepaired(2);
  tata.guardGate();
}