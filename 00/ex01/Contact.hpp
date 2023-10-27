
#ifndef CONTACT_HPP_
#define CONTACT_HPP_

// Class declaration
#include <string>
class Contact {
 public:
  Contact(void);
  ~Contact(void);
  void print_list(void) const;
  void set_name(std::string name);

 private:
  std::string first_name;
  std::string last_name;
  std::string nick_name;
  std::string phone_number;
  std::string secret;
};

#endif // CONTACT_HPP_
