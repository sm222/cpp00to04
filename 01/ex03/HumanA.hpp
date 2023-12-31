
#ifndef HUMANA_HPP_
#define HUMANA_HPP_

#include "Weapon.hpp"
#include <iostream>
// Class declaration
class HumanA {
 public:
  HumanA(std::string name, Weapon &weapon);
  void attack(void) const;
  ~HumanA();

 private:
  const std::string _name;
  Weapon &_arm;
};

#endif // HUMANA_HPP_
