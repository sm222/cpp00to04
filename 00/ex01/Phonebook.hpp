#include "Contact.hpp"

#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_

// Class declaration
class Phonebook {
 public:
  Phonebook(void);
  ~Phonebook(void);

  void add(void);
  void search(void);
  void print_index(int i);

 private:
  Contact list[8];
  void move_data(void);
  void print_bord(void);
  void print_data(int i);
};

#endif // PHONEBOOK_HPP_
