#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"

// Class declaration
class HumanB {
 public:
  HumanB(std::string name);
  ~HumanB();

 private:
  std::string _name;
  Weapon _arm;
};

#endif // HUMANB_HPP_