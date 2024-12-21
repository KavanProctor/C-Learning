#include <iostream>


int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18){
      std::cout <<"You are eligible to enter the website";
      }
    else if (age < 0) {
        std::cout <<"LIAR";
    }
    else {
        std::cout <<"You are not eligible to enter the website";
    }//if 2 things conflict order does matter, and so we put the one we need first and then the ones after 2nd

   return 0;
}