#include <iostream>

/*Creating the basic console out line
int main(){
  std::cout<< "Hello World"<< '\n';
  }
  */

int main() {
  int x;//declaring variable
  x = 5;//giving instance of variable

  int y = 6; //when we know the value immediately

  int sum = x + y; //adding variables together
  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << sum << '\n';

  return 0;
}

/* list of all varible types
  int-- for whole numbers
  double(float)-- for decimal numbers
  char-- for using single charecters like a students grade{a,b,c,d,..}
  boolean- TRUE or FALSE
  string(sequence of objects that represnt of text)-- std::string name = "Kavan";
 */