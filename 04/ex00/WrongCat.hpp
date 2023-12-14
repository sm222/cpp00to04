
#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include <iostream>
#include "WrongAnimal.hpp"
// Class declaration
class WrongCat : public WrongAnimal {
 public:
  WrongCat(void);
  WrongCat(const WrongCat &other);
  WrongCat &operator=(const WrongCat &rhs);
  ~WrongCat(void);
  void  makeSound(void) const;
 private:
  
};

#endif // WRONGCAT_HPP_
