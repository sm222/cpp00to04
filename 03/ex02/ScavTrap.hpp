
#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>

// Class declaration
class ScavTrap : public ClapTrap {
 public:
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &rhs);
  ~ScavTrap(void);
  //* * * * * *//
  void  attack(const std::string &target);
  void  guardGate(void);

 private:
};

#endif // SCAVTRAP_HPP_