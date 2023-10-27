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

void  Phonebook::add(std::string name)
{
  //for (int i = 0; i < 7; i++) {
  //  list[i]= list[i + 1];
  //  std::cout << "t\n";
  //}
  list[0].set_name(name);
}