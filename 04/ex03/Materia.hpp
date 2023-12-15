
#ifndef MATERIA_HPP_
#define MATERIA_HPP_

#include <iostream>

// Class declaration
class AMateria {
 public:
  AMateria();
  AMateria(const AMateria &other);
  AMateria &operator=(const AMateria &rhs);
  ~AMateria();
  // *                           *//
  std::string const & getType() const;
  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);
 private:
  
 protected:
  
};

#endif // MATERIA_HPP_
