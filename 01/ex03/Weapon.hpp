
#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>

// Class declaration
class Weapon {
 public:
  Weapon();
  ~Weapon();
  const std::string getType(void) const;
  void  setType(std::string arg);

 private:
  std::string type;
};

#endif // WEAPON_HPP_
