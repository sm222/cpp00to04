#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"
#include <iostream>
#include <string>
// Class declaration

class HumanB {
 public:
  HumanB(const std::string name);
  void  attack(void) const;
  void  setWeapon(Weapon &arm);
  void  setType(const std::string &type);
  ~HumanB(void);

 private:
  const std::string _name;
  Weapon *_arm;
};

#endif // HUMANB_HPP_