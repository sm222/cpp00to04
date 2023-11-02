#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>
#include <string>

// Class declaration
class Zombie {
 public:

  Zombie (std::string name);
  
  ~Zombie (void);

  void annouce(void);

 private:
  std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif // ZOMBIE_HPP_
