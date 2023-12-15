
#include "Brain.hpp"

// Default constructor
Brain::Brain(void) {
  std::cout << "Default constructor for Brain" << std::endl;
}

// Copy constructor
Brain::Brain(const Brain &other) {
  std::cout << "Copy constructor for Brain" << std::endl;
  *this = other;
}

// Copy assignment overload
Brain &Brain::operator=(const Brain &rhs) {
  std::cout << "Copy assignment overload Brain" << std::endl;
  for (size_t i = 0; i < 100; i++)
    this->setIdea(rhs.getIdea(i), i); 
  return (*this);
}

// Default destructor
Brain::~Brain() {
  std::cout << "Destructor Brain" << std::endl;
}

void  Brain::setIdea(const std::string idea, unsigned int i) {
  if (i > 99)
    return ;
  this->_ideas[i] = idea;
}

std::string Brain::getIdea(unsigned int i) const{
  if (i < 100)
    return (this->_ideas[i]);
  return ("");
}
