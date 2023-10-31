
#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>

int main(void) {
  Phonebook phone;

  std::cout << "Welcome to my phonebook" << std::endl;
  while (true) {
    std::string tmp;
    std::cout << "> ";
    std::getline(std::cin, tmp);
    if (std::cin.fail())
      return (1);
    else if (tmp == "ADD")
      phone.add();
    else if (tmp == "EXIT")
      return (0);
    else if (tmp == "SEARCH")
      phone.search();
    else
      std::cout << "bad input" << std::endl;
  }
  return (0);
}
