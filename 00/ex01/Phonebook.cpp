#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>


Phonebook::Phonebook(void)
{
  std::cout << "make ph" << std::endl;
}


Phonebook::~Phonebook(void)
{
  std::cout << "del ph" << std::endl;
}

void Phonebook::print_index(int i)
{
  Phonebook::list[i].print_list();
}