#include <iostream>

int main(void)
{
  std::string data = "HI THIS IS BRAIN";
  std::string *str_ptr = &data;
  std::string &str_ref = data;
  
  std::cout << &data << std::endl;
  std::cout << str_ptr << std::endl;
  std::cout << &data << std::endl << std::endl;
  std::cout << data << std::endl;
  std::cout << *str_ptr << std::endl;
    std::cout << str_ref << std::endl;
}