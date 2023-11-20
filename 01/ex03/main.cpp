#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*
int main(void) {

  Weapon  gun = Weapon("the gun shoot bullets");

  HumanA  bob("bob", gun);
  HumanB  bob2("bob2");
  bob.attack();
  gun.setType("bigger gun");
  bob.attack();
  bob2.attack();
  bob2.setWeapon(gun);
  bob2.attack();

}
*/

int main()
{
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);

    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }

  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");

    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
return 0;
}
