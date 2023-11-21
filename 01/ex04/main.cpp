
#include <iostream>
#include <sstream>
#include <fstream>

std::string ft_toString(std::ostream &in) {
  std::ostringstream  out;
  out << in.rdbuf();
  return (out.str());
};

int main(int ac, char **av) {
  if (ac < 4)
  {
    std::cout << "bad" << std::endl;
    return (1);
  }
  std::ofstream inFile;

  inFile.open(av[1], std::ios::in);
  std::string txt;
  txt += ft_toString(inFile);
  std::cout << txt.find(av[2], 0);

}