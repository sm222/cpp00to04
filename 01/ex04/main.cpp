
#include <iostream>
#include <sstream>
#include <fstream>

static int err(std::string msg) {
  std::cerr << msg << std::endl;
  return (1);
}

static int lookArgs(char **av) {
  if (!std::strlen(av[2]) || !std::strlen(av[3]))
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

  if (ac < 4)
    return (err("invalie arg"));
  //open the file in and out and look at args
  if (lookArgs(av) || openFile(inFile, outFile, av))
    return (1);
  while (getline(inFile, line))
  {
    size_t  i = 0;
    size_t  tmp = 0;
    while (i < line.length())
    {
      tmp = line.find(av[2], i);
      if (tmp != std::string::npos)
      {
        line.erase(tmp, std::strlen(av[2]));
        line.insert(tmp, av[3], std::strlen(av[3]));
      }
      i += tmp;
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
