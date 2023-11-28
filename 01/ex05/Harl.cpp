#include "Harl.hpp"

void  Harl::debug(void) {
  std::cout << DEBUG << std::endl;
};

void  Harl::info(void) {
  std::cout << INFO << std::endl;
};

void  Harl::warning(void) {
  std::cout << WARNING << std::endl;
};

void  Harl::error(void) {
  std::cout << ERROR << std::endl;
};

Harl::Harl(void) {

  this->msg[0] = &Harl::debug;
  this->msg[1] = &Harl::info;
  this->msg[2] = &Harl::warning;
  this->msg[3] = &Harl::error;
  this->name[0] = "DEBUG";
  this->name[1] = "INFO";
  this->name[2] = "WARNING";
  this->name[3] = "ERROR";
};

void Harl::complain(std::string level) {

  size_t  i = 0;

  while (i < 4)
  {
    if (level.compare(this->name[i]) == 0)
    {
      (this->*this->msg[i])();
      break ;
    }
    i++;
  }
}

Harl::~Harl(void) {
};