
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

static void sayType(WrongAnimal &animal) {
  std::cout << "this animal is a " << animal.getType() << std::endl;
}

static void sayType(AAnimal &animal) {
  std::cout << "this animal is a " << animal.getType() << std::endl;
}

int main(void) {
  AAnimal *a = new Cat;
  sayType(*a);
  AAnimal *c = new Dog;
  sayType(*c);
  WrongAnimal *d = new WrongCat;
  sayType(*d);
  WrongAnimal *e = new WrongAnimal;
  sayType(*e);
  Cat f;
  f.setBrain("life", 9);
  Cat g = Cat(f);
  std::cout << g.getBrain(9) << std::endl;
  for (size_t i = 0; i < 101; i++)
  {
    a->setBrain("eat", i);
    std::cout << a->getBrain(i) << std::endl;
  }

  delete a;
  delete c;
  delete d;
  delete e;
}