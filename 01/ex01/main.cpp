#include "Zombie.hpp"

int main(void) {

  Zombie *Horde;

  Horde = zombieHorde(10, "bijour");
  delete []Horde;
}