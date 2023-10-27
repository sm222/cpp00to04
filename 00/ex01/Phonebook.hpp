#include "Contact.hpp"

#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_

// Class declaration
class Phonebook{
 public:
  Phonebook(void);
  ~Phonebook(void);
  void print_index(int i);
  void  add(std::string name);

 private:
  Contact list[8];
};

#endif // PHONEBOOK_HPP_
