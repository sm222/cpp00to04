
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

// Class declaration
class Animal {
 public:
  Animal(void);
  Animal(const Animal &other);
  Animal &operator=(const Animal &rhs);
  virtual ~Animal(void);

  std::string getType(void) const;
  virtual void makeSound(void) const;
  virtual void setBrain(const std::string val, unsigned int i);
  virtual std::string getBrain(unsigned int i) const;
 protected:
  void setType(const std::string type);
  std::string _type;
};

#endif // ANIMAL_HPP_



