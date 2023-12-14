
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

// Class declaration
class Animal {
 public:
  Animal(void);
  Animal(const Animal &other);
  Animal &operator=(const Animal &rhs);
  ~Animal(void);

  std::string getType(void) const;
  virtual void makeSound(void) const;
 protected:
  void setType(const std::string type);
  std::string _type;
};

#endif // ANIMAL_HPP_



