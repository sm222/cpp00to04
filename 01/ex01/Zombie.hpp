
#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>

// Class declaration
class Zombie { 
 public:
  Zombie(void);
  Zombie(std::string name);
  ~Zombie(void);
  void announce(void);
  void setName(std::string name);

 private:
  std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP_
