
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  Animal *a = new Cat;
  Animal *b = new Dog;
  Animal *c = new Animal;
  WrongAnimal *d = new WrongCat;
  WrongAnimal *e = new WrongAnimal;
  //* Cat *e = new Animal; won't wokr becose animal can be a cat but a cat can't be a animal
  std::cout << "a is " << a->getType() << std::endl;
  a->makeSound();
  std::cout << "b is " << b->getType() << std::endl;
  b->makeSound();
  std::cout << "c is " << c->getType() << std::endl;
  c->makeSound();
  std::cout << "d is " << d->getType() << std::endl;
  d->makeSound();
  std::cout << "e is " << e->getType() << std::endl;
  e->makeSound();
  delete a;
  delete b;
  delete c;
  delete d;
  delete e;
}