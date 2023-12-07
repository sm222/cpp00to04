
#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

# ifdef DEBUG
#  define DEBUG 0
# endif

// Class declaration
#include <string>
#include <iostream>

class ClapTrap {
 public:
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &rhs);
  ~ClapTrap(void);
  // * name * //
  void         setName(std::string &name);
  std::string  getName(void) const;
  // * * * * //
  virtual void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 protected:
 // * hit  * //
  void         setHit(unsigned int hit);
  unsigned int getHit(void) const;
  // *energy* //
  void         setEnergy(unsigned int hit);
  unsigned int getEnergy(void) const;
  // *attack* //
  void         setAttack(unsigned int hit);
  unsigned int getAttack(void) const;
  std::string   _name;
  unsigned  int _hit;
  unsigned  int _energy;
  unsigned  int _attack;
};

#endif // CLAPTRAP_HPP_
