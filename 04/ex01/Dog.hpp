
#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

// Class declaration
class Dog : public Animal {
 public:
  Dog(void);
  Dog(const Dog &other);
  Dog &operator=(const Dog &rhs);
  ~Dog(void);
  void makeSound(void) const;
 private:
  Brain *_brain;
};

#endif // CAT_HPP_