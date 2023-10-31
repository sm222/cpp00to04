#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

std::string  Contact::read_val(int i) {
  return (this->str[i]);
}

void  Contact::set_index(std::string str, int i) {
  this->str[i] = str;
}
