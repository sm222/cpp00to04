
#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>

// Class declaration
class FragTrap : public ClapTrap {
 public:
  FragTrap(std::string name);
  FragTrap(const FragTrap &other);
  FragTrap &operator=(const FragTrap &rhs);
  ~FragTrap(void);
  //* * * * * * * //
  void  highFivesGuys(void);
  void  attack(const std::string &target);
 private:
  
};

#endif // FRAGTRAP_HPP_
