
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

static void sayType(WrongAnimal &animal) {
  std::cout << "this animal is a " << animal.getType() << std::endl;
}

static void sayType(Animal &animal) {
  std::cout << "this animal is a " << animal.getType() << std::endl;
}

int main(void) {
  Animal *a = new Cat;
  sayType(*a);
  Animal *b = new Animal;
  sayType(*b);
  Animal *c = new Dog;
  sayType(*c);
  WrongAnimal *d = new WrongCat;
  sayType(*d);
  WrongAnimal *e = new WrongAnimal;
  sayType(*e);
  for (size_t i = 0; i < 150; i++)
  {
    a->setBrain("eat", i);
    b->setBrain("void", i);
    b->getBrain(i);
    std::cout << a->getBrain(i) << std::endl;
  }

  delete a;
  delete b;
  delete c;
  delete d;
  delete e;
}