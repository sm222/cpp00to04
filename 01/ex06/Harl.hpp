
#ifndef HARL_HPP_
#define HARL_HPP_


#define DEBUG "love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !"
#define INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
#define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR "This is unacceptable ! I want to speak to the manager now."

// Class declaration
#include <iostream>

class Harl {
 public:
  Harl(void);
  void  callFt(int i);
  int  complain(std::string level);
  ~Harl(void);

 private:
  typedef void (Harl::*Msg)(void);
  std::string name[4];
  Msg msg[4];

  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif // HARL_HPP_