
#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

// Class declaration
#include <string>
#include <iostream>

class ClapTrap {
 public:
  ClapTrap();
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &rhs);
  ~ClapTrap();

 private:
  std::string _name;
};

#endif // CLAPTRAP_HPP_
