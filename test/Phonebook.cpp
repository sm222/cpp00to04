#include "Phonebook.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <stdlib.h>

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
        return ;
    } while (tmp.size() == 0);
    list[0].set_index(tmp, i);
  }
}

void  Phonebook::print_data(int i)
{
  for (int j = 0; j < 5; j++) {
    std::cout << list[i].read_val(j) << std::endl;
  }
}

void  Phonebook::search(void){

  std::cout << std::endl << "N| first name" << std::endl;
    for (int j = 0; j < 8; j++) {
      std::cout << j + 1;
      for (int i = 0; i < 5; i++) {
        if (list[j].read_val(0).length() > 10)
          std::cout << "| " << std::setw(9) << list[j].read_val(i).substr(0, 9) << ".";
        else
          std::cout << "| " << std::setw(10) << list[j].read_val(i);
      }
      std::cout << std::endl;
  }

  std::string tmp;
  std::cin >> tmp;
  if (tmp.empty())
    return ;
  int index = atoi(tmp.c_str());
  if (index < 1 || index > 8)
  {
    std::cout << "out of range" << std::endl;
    return ;
  }
  if (!list[index - 1].read_val(0).empty())
    print_data(index - 1);
  return ;
}