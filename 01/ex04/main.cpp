
#include <iostream>

int main(int ac, char **av) {
  if (ac < 4)
  {
    std::cout << "bad" << std::endl;
    return (1);
  }
  std::cout << "good" << std::endl;
}