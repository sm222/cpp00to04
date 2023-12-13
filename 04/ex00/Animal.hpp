


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

  virtual void makeSound(void);
 protected:
  std::string _type;
  void setType(const std::string type);
  std::string getType(void) const;
 private:
};

#endif // ANIMAL_HPP_



