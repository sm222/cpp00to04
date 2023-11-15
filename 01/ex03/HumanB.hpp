#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"
#include <iostream>
#include <string>
// Class declaration

class HumanB {
 public:
  HumanB(const std::string name);
  void  setWeapon(Weapon *arm);
  ~HumanB(void);

 private:
  const std::string _name;
  Weapon *_arm;
};

#endif // HUMANB_HPP_