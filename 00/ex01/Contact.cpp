#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
    std::cout << "make c" << std::endl;
    this->first_name = "";
}

Contact::~Contact(void)
{
  std::cout << "del c" << std::endl;
}

void  Contact::print_list(void) const {
  std::cout << this->first_name << std::endl;
  std::cout << this->last_name << std::endl;
  std::cout << this->nick_name << std::endl;
  std::cout << this->phone_number << std::endl;
  std::cout << this->secret << std::endl;
}