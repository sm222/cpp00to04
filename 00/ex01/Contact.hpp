
#ifndef CONTACT_HPP_
#define CONTACT_HPP_


typedef enum e_str_type{
  first_name,
  last_name,
  nick_name,
  phone_number,
  secret
} t_str;

#include <string>

class Contact {
 public:
  Contact(void);
  ~Contact(void);
  void  set_index(std::string str, int i);
  std::string read_val(int i);

 private:
  std::string str[5];
};

#endif // CONTACT_HPP_
