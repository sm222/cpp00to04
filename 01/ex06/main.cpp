
#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av) {
  
  if (ac == 2) {
    Harl  bot;
    std::string arg = av[1];
    int code = bot.complain(arg);

    switch (code)
    {
    case (0):
      bot.callFt(0);
    case (1):
      bot.callFt(1);
    case (2):
      bot.callFt(2);
    case (3):
      bot.callFt(3);
      break ;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      break;
    }
  }
  else
    std::cout << "**silence**" << std::endl;
}