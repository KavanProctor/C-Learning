#include <iostream>
#include <ctime>


int main() {


  int num;
  int guess;
  int tries;

  srand(time(NULL));
  num = (rand() % 100) + 1;

  std::cout << "**************GUESSING GAME*********************" << std::endl;
  do{
      std::cout<< "Please enter an integer(1-100): ";
      std::cin >> guess;
      tries++;

      if(guess > num){
        std::cout<<"Guess lower next time"<< '\n';
        }
      else if(guess < num){
        std::cout<<"Guess higher next time"<< '\n';
      }
      else{
        std::cout<<"YOU WERE CORRECT THE NUMBER WAS: "<<num<< '\n';
        std::cout<<"Your total Number Of Guesses Was: "<<tries<< '\n';
        break;
        }
    }while(guess != num);
  std::cout << "***********************************" << std::endl;


  return 0;
}