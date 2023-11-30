
#include <iostream>
#include <sstream>
#include <fstream>

size_t  ft_strlen(const char *s) {
  size_t i = 0;

  if (s)
    while (s[i])
      i++;
  return (i);
}

static int err(std::string msg) {
  std::cerr << msg << std::endl;
  return (1);
}

static int lookArgs(char **av) {
  if (!av[2][0] || !av[3][0])
    return (err("invalid args len"));
  return (0);
}

static int openFile(std::ifstream &inFile, std::ofstream &outFile, char **av) {

  inFile.open(av[1], std::ios::in);

  if (inFile.fail())
    return (err("no file " + (std::string)av[1]));

  outFile.open(av[1] + (std::string)".replace", std::ios::out);
  if (outFile.fail())
  {
    inFile.close();
    return (err("can't make outfile"));
  }
  return (0);
}

int main(int ac, char **av) {

  std::ifstream inFile;
  std::ofstream outFile;
  std::string line;
  size_t  s1 = 0, s2 = 0;

  if (ac < 4)
    return (err("invalie arg, need > file word newWord"));
  //open the file in and out and look at args
  if (lookArgs(av) || openFile(inFile, outFile, av))
    return (1);
  s1 = ft_strlen(av[2]);
  s2 = ft_strlen(av[3]);
  while (getline(inFile, line))
  {
    size_t  i = 0;
    size_t  tmp = 0;
    while (i < line.length())
    {
      tmp = line.find(av[2], i);
      if (tmp != std::string::npos)
      {
        line.erase(tmp, s1);
        line.insert(tmp, av[3], s2);
      }
      i += s1;
    }
    if (line.empty())
      outFile << std::endl;
    else
      outFile << line << std::endl;
  }
  outFile.close();
  inFile.close();
  return (0);
}
