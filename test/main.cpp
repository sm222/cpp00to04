#include <iostream>
#include <string>

int main(int ac, char **av)
{
  if (ac < 2)
  {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
  }
  std::string out = "";
  for (size_t i = 1; i < ac; i++)
    for (size_t j = 0; av[i][j]; j++)
      out += std::toupper(av[i][j]);
  std::cout << out << std::endl;
  return (0);
}
