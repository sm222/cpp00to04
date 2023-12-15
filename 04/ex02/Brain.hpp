
#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
// Class declaration
class Brain {
 public:
  Brain(void);
  Brain(const Brain &other);
  Brain &operator=(const Brain &rhs);
  ~Brain();
  void setIdea(const std::string idea, unsigned int i);
  std::string getIdea(unsigned int i) const;

 private:
  std::string _ideas[100];
};

#endif // BRAIN_HPP_
