
#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>
// Class declaration
class WrongAnimal {
 public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &rhs);
  ~WrongAnimal(void);
  void  makeSound(void) const ;
  std::string  getType(void) const;

 protected:
  void  setType(const std::string type);
  std::string _type;
};

#endif // WRONGANIMAL_HPP_
