#include <iostream>


int MyNum = 3; //avoid global variables because they are less secure and it could get cluttered

void printNum();

int main() {
  //Local Variables = declared inside a function or block of {}
  //global variables = declared outside all functions


  printNum();
  std::cout << MyNum << std::endl;

  return 0;
}

void printNum() {
  std::cout << MyNum << '\n';
}