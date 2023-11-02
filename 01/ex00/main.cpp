#include "Zombie.hpp"

int main(void) {

  Zombie test2("bijour");
  Zombie *test3;

  test3 = newZombie("bijour2");
  test2.annouce();
  test3->annouce();
  randomChump("bijour3");
  delete test3;
}
