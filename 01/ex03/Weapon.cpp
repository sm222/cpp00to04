#include "Weapon.hpp"
#include <string>

Weapon::Weapon(void) {
};

Weapon::~Weapon(void) {
};

const std::string Weapon::getType(void) const {
  return this->type;
}

void  Weapon::setType(std::string arg) {
  this->type = arg;
}