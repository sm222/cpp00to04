#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {

	Zombie *list;

  list = new Zombie[N];
  for (int i = 0; i < N; i++) {
    list[i].setName(name);
    list[i].announce();
  }
  return (list);
}