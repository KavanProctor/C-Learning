#include <iostream>

//UNDERSTANDING CONST
int main(){
  //constant is something that cannot be changed

  const double PI = 3.14159265359;
  double radius = 10;
  double circumference = 2 * PI * radius;

  std::cout << circumference <<  "cm" << '\n';



  return 0;
}


//Learning about namespaces
namespace first {
  int x = 1;
}

namespace second {
  int x = 2;
}

int main() {
  using namespace first;//if I didn't declare x in the local class then it would assume x is from the first namespace

  //using namespace std; allows us to cut down on using std because cout would register as std::cout

  int x = 0; //IF I don't call a namespace for the variable when calling it uses the local variable

  std::cout << x << '\n';//calls local variable
  std::cout << first::x << '\n';//calls first namespace variable x
  std::cout << second::x << '\n';//calls second namespace variable x
  return 0;
}
