
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  Animal *a = new Cat;
  Animal *c = new Dog;
  Animal *b = new Animal;
  //* Cat *e = new Animal; won't wokr becose animal can be a cat but a cat can't be a animal
  a->makeSound();
  b->makeSound();
  c->makeSound();
  delete a;
  delete b;
  delete c;
}