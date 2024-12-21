#include <iostream>


int main()
{
  char operation;
  double num1;
  double num2;
  double result;
  std::cout << "***************** WELCOME TO THE CALCULATOR ******************" << std::endl;
  std::cout << "Enter operation code(+, -, *, /):";
  std::cin >> operation;

  std::cout << "Enter the first number:";
  std::cin >> num1;
  std::cout << "Enter the second number:";
  std::cin >> num2;

  switch (operation){
    case '+':
      result = num1 + num2;
      std::cout << "Result is: " << result << std::endl;
      break;
   case '-':
     result = num1 - num2;
     std::cout << "Result is: " << result << std::endl;
     break;
   case '*':
     result = num1 * num2;
     std::cout << "Result is: " << result << std::endl;
     break;
   case '/':
     result = num1 / num2;
     std::cout << "Result is: " << result << std::endl;
     break;
   default:
     std::cout << "Invalid operation code" << std::endl;
     break;
    }

  return 0;
}