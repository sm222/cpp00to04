#include "Weapon.hpp"
#include <string>

Weapon::Weapon(const std::string type) :_type(type) {
};

Weapon::~Weapon(void) {
};

const std::string Weapon::getType(void) const {
  return this->_type;
}

void  Weapon::setType(const std::string arg) {
  this->_type = arg;
}