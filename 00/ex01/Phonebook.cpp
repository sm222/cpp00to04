#include "Phonebook.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

const std::string input_list[5] = {
  "first name",
  "last name",
  "nickname",
  "phone_number",
  "secret"
};


Phonebook::Phonebook(void) {
}


Phonebook::~Phonebook(void) {
}

void Phonebook::print_index(int i) {
}

void Phonebook::move_data(void) {
  
  for (int i = 6; i > -1; i--) {
    for (int j = 0; j < 5; j++)
      list[i + 1].set_index(list[i].read_val(j), j);
  }
}

void  Phonebook::add(void) {
  
  std::string new_args[5];
  std::string tmp;
  for (int i = 0; i < 5; i++) {
    std::cout << input_list[i] << " ";
    std::getline(std::cin, tmp);
    if (std::cin.fail())
      return ;
    if (tmp.empty())
    {
      std::cout << "bad args" << std::endl;
      return;
    }
    new_args[i] = tmp;
  }
  move_data();
  for (int i = 0; i < 5; i++) {
    list[0].set_index(new_args[i], i);
    new_args[i].clear();
  }
}

void  Phonebook::print_data(int i) {

  for (int j = 0; j < 5; j++) {
    std::cout << list[i].read_val(j) << std::endl;
  }
}

void  Phonebook::print_bord(void) {

  std::cout << std::endl << "    number|first name| last name|  nickname|" << std::endl;
    for (int j = 0; j < 8; j++) {
        std::cout << std::right << std::setw(10) << j + 1 << "|";
        for (int i = 0; i < 3; i++) {
        if (list[j].read_val(0).length() > 10)
          std::cout << std::right << std::setw(9) << list[j].read_val(i).substr(0, 9) << ".|";
        else
          std::cout << std::right << std::setw(10) << list[j].read_val(i) << "|";
    }
    std::cout << std::endl;
  }
}

void  Phonebook::search(void) {

  print_bord();
  std::cout << "give a number ";
  std::string tmp;
  std::getline(std::cin, tmp);
  if (std::cin.fail())
    return ;
  int index = std::atoi(tmp.c_str());
  if (index < 1 || index > 8)
  {
    std::cout << "out of range" << std::endl;
    return ;
  }
  if (!list[index - 1].read_val(0).empty())
    print_data(index - 1);
  else
    std::cout << "nothing at " << index << std::endl;
  return ;
}