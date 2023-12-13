
#include "Animal.hpp"
#include "Cat.hpp"

int main(void) {
  Animal *a = new Cat;
  a->makeSound();
  delete a;
}