
#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>

int main(void)
{
  Phonebook phone;

  std::cout << "Welcome to my phonebook" << std::endl;
  while (true) {
    std::string tmp;
    std::cout << "> ";
    std::getline(std::cin, tmp);
    if (std::cin.fail())
      return (1);
    else if (tmp == "ADD" || tmp == "add")
      phone.add();
    else if (tmp == "EXIT" || tmp == "exit")
      return (0);
    else if (tmp == "SEARCH" || tmp == "search")
      phone.search();
    else
      std::cout << "bad input" << std::endl;
  }
  return (0);
}
