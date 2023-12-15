
#include "Materia.hpp"


AMateria::AMateria() {

}

// Copy constructor
AMateria::AMateria(const AMateria &other) {
  *this = other;
}

// Copy assignment overload
AMateria &AMateria::operator=(const AMateria &rhs) {
  (void)rhs;
  return (*this);
}

// Default destructor
AMateria::~AMateria() {

}
