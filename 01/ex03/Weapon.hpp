
#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>

// Class declaration
class Weapon {
 public:
  Weapon(const std::string type);
  ~Weapon();
  const std::string getType(void) const;
  void  setType(const std::string arg);

 private:
  std::string _type;
};

#endif // WEAPON_HPP_
