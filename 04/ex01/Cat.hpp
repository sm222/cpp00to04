
#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

// Class declaration
class Cat : public Animal {
 public:
  Cat(void);
  Cat(const Cat &other);
  Cat &operator=(const Cat &rhs);
  ~Cat(void);
  void makeSound(void) const;
  //void setIdeaCat(const std::string idea, unsigned int i);
  //std::string getIdeaCat(unsigned int i) const;
 private:
  Brain *_brain;
};

#endif // CAT_HPP_