
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

// Class declaration
class AAnimal {
 public:

  std::string getType(void) const;
  virtual void makeSound(void) const = 0;
  virtual void setBrain(const std::string val, unsigned int i) = 0;
  virtual std::string getBrain(unsigned int i) const = 0;
  virtual ~AAnimal(void);
 protected:
  AAnimal &operator=(const AAnimal &rhs);
  AAnimal(void);
  AAnimal(std::string type);
  AAnimal(const AAnimal &other);
  void setType(const std::string type);
  std::string _type;
};

#endif // ANIMAL_HPP_



