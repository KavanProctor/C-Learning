#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int randomNumber = rand() % 5 + 1;

    switch(randomNumber){
      case 1:
         std::cout<<"You won a sticker";
         break;
      case 2:
         std::cout<<"You won a water bottle";
         break;
      case 3:
         std::cout<<"You won a key chain";
         break;
      case 4:
         std::cout<<"You won a car";
         break;
      case 5:
         std::cout<<"You won a house";
         break;
      }

    return 0;
}