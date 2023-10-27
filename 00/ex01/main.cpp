
#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>

int main(void)
{
  Phonebook phone;

  while (true) {
    std::string tmp;
    std::cin >> tmp;
    if (tmp.empty())
      return 1;
    if (tmp == "ADD")
      phone.add(tmp);
    phone.print_index(0);
    phone.print_index(1);
    phone.print_index(2);
    phone.print_index(3);
    phone.print_index(4);
    phone.print_index(5);
    phone.print_index(6);
  }
  return 0;
}

/*
#include <iostream>
using namespace std;

class Employee {
  private:
    ? Private attribute
    int salary;

  public:
    ? Setter
    void setSalary(int s) {
      salary = s;
    }
    ? Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}
• ADD : enregistrer un nouveau contact
◦ Si l’utilisateur entre cette commande, le programme lui demande de remplir
une par une les informations du nouveau contact. Une fois tous les champs
complétés, le nouveau contact est ajouté au répertoire.
◦ Un contact possède les champs suivants : first name (prénom), last name
(nom de famille), nickname (surnom), phone number (numéro de téléphone),
et darkest secret (son plus lourd secret). Les champs d’un contact enregistré ne
peuvent être vides.
*/

