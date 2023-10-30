#include "Contact.hpp"

#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_

// Class declaration
class Phonebook{
 public:
  Phonebook(void);
  ~Phonebook(void);
  void print_index(int i);
  void  add(void);
  void  search(void);

 private:
  void move_data(void);
  Contact list[8];
};

#endif // PHONEBOOK_HPP_
