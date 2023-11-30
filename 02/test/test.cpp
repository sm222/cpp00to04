
#include "test.hpp"

Test::Test(void) {

};


Test::~Test(void) {
  
};

void  Test::doStuff(void) {
  std::cout << "void" << std::endl;
}

void  Test::doStuff(std::string s) {
  std::cout << s << std::endl;
}