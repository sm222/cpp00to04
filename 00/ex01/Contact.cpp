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

void  Contact::set_name(std::string name)
{
  this->first_name = name;
}

void  Contact::print_list(void) const {
  std::cout << "name " << this->first_name << std::endl;
  //std::cout << "name " << this->last_name << std::endl;
  //std::cout << "name " << this->nick_name << std::endl;
  //std::cout << "name " << this->phone_number << std::endl;
  //std::cout << "name " << this->secret << std::endl;
}