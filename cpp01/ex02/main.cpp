//
// Created by Mehmet eren Akbulut on 11/18/22.
//
#include "string"
#include <iostream>
int main(void){
  std::string stringREF1 = "HI THIS IS BRAIN";
  std::string *stringPTR = &stringREF1;
  std::string &stringREF = stringREF1;

  std::cout << &stringREF1 << std::endl;
  std::cout << stringPTR << std::endl;
  std::cout << &stringREF << std::endl;
  std::cout << stringREF1 << std::endl;
  std::cout << *stringPTR << std::endl;
  std::cout << stringREF << std::endl;
  return  0;
}