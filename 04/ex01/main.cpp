
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


  delete a;
  delete b;
  delete c;
  delete d;
  delete e;
}