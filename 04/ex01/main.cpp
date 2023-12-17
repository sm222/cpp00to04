
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <new>

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
    //b->setBrain("void", i);
    //b->getBrain(i);
    std::cout << a->getBrain(i) << std::endl;
  }
  std::cout << "making a copy" << std::endl;

  Cat catA;
  catA.setBrain("sleep", 42);
  Cat catB = Cat(catA);
  Dog dogA;
  dogA.setBrain("run", 9);
  Dog dogB = Dog(dogA);
  std::cout << dogB.getBrain(9) << std::endl;

  std::cout << catB.getBrain(42) << std::endl;
  delete a;
  delete b;
  delete c;
  delete d;
  delete e;
}