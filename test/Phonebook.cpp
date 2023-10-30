#include "Phonebook.hpp"
#include "Contact.hpp"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>

const std::string input_list[5] = {
  "first name",
  "last name",
  "nickname",
  "phone_number",
  "secret"
};


Phonebook::Phonebook(void)
{
  std::cout << "make ph" << std::endl;
}


Phonebook::~Phonebook(void)
{
}

void Phonebook::print_index(int i)
{
}

void Phonebook::move_data(void)
{
  for (int i = 6; i > -1; i--) {
    for (int j = 0; j < 5; j++)
      list[i + 1].set_index(list[i].read_val(j), j);
  }
}

void  Phonebook::add(void)
{
  move_data();
  std::string tmp;
  for (int i = 0; i < 5; i++) {
    std::cout << input_list[i] << " ";
    do {
      std::cin >> tmp;
      if (tmp.empty())
        break ;
    } while (tmp.size() == 0);
    list[0].set_index(tmp, i);
  }
}



void  Phonebook::search(void){
  std::cout << std::endl << "N | first name" << std::endl;
    for (int j = 0; j < 8; j++) {
      std::cout << j + 1 << " | " << std::setw(10) << list[j].read_val(0) << "|" << std::endl;
  }
  return ;
}