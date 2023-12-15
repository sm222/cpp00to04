
#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

// Class declaration
class Dog : public AAnimal {
 public:
  Dog(void);
  Dog(const Dog &other);
  Dog &operator=(const Dog &rhs);
  ~Dog(void);
  void makeSound(void) const;
  void setBrain(const std::string val, unsigned int i);
  std::string getBrain(unsigned int i) const;
 private:
  Brain *_brain;
};

#endif // CAT_HPP_