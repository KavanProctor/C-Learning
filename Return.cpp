#include<iostream>

/*
double square(double length);
double cube(double length);

int main()
{
  double length = 5.0;
  double area = square(length);
  std::cout << area << std::endl;
  double volume = cube(length);
  std::cout << volume << std::endl;

  return 0;
}

double square(double length){
  double result = length * length;
  return result;
  }

double cube(double length) {
  double CubedResult = length * length * length;
  return CubedResult;
  //could also do in a single line by doing return length * length * length;
}
*/

std::string FullName(std::string string1, std::string string2);

int main() {
  std::string firstName = "Bro";
  std::string lastName = "Code";

  std::string Name = FullName(firstName, lastName);
  std::cout << Name << std::endl;
  return 0;
}
std::string FullName(std::string string1, std::string string2) {
  return string1 + " " + string2;
}