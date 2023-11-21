
#include <iostream>
#include <fstream>

int main(int ac, char **av) {
  if (ac < 4)
  {
    std::cout << "bad" << std::endl;
    return (1);
  }
  std::ofstream inFile;

  inFile.open(av[1], std::ios::in);
  std::cout << inFile.rdbuf();
  
}