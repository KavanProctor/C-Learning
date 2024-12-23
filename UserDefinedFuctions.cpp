#include <iostream>

void HappyBirthday(const std::string& name, int age);

int main()

{

  const std::string name = "Bro";
  const int age = 21;
  //Function is a block of reusable code
  HappyBirthday(name,age);


  return 0;
}

void HappyBirthday(const std::string& name, const int age){
  std::cout << "Happy Birthday to you " << name << " " << age <<  '\n';
  std::cout << "Happy Birthday to you " << name << " " << age <<  '\n';
  std::cout << "Happy Birthday to you " << name << " " << age <<  '\n';

}

//functions must be declared before they are used unless you declare it at the top