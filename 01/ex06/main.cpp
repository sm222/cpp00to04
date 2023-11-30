
#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av) {
  
  if (ac == 2) {
    Harl  bot;
    std::string arg = av[1];
    int code = bot.complain(arg);

    switch (code) {
    case (0):
      bot.callFt(code++);
    case (1):
      bot.callFt(code++);
    case (2):
      bot.callFt(code++);
    case (3):
      bot.callFt(code++);
      break ;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      break;
    }
    return (0);
  }
  else
  {
    if (ac == 1)
      std::cout << "[ silence ]" << std::endl;
    else
      std::cout << "[ Harl is overwhelm ]" << std::endl;
  }
  return (1);
}