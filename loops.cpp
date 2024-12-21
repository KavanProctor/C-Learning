#include <iostream>

/* While loops
int main(){
    std::string name;


    while(name.empty()) {
        std::cout << "HELP I CANT GET OUT OF THIS LOOP: ";
    }

      std::cout << "hello, " << name << "\n";


    return 0;
}
*/
/* do while loops
int main() {
    int number;
    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }
    while (number < 0);

    std::cout << "The number is: " << number;
    return 0;
}
*/
/*
int main() {
    for (int i = 1; i <= 5; i++) {
        std::cout << "The current number is " << i << '\n';
    }

    return 0;
}
//Using a break completly breaks out of the loop
//Using continue just skips over whatever the if(){contiune} says the skip
*/

/* Nested Loops
int main() {
    int rows;
    int columns;
    char symbol;

    std::cout << "how many rows do you want: ";
    std::cin >> rows;

    std::cout << "how many columns do you want: ";
    std::cin >> columns;

    std::cout << "What symbol do you want: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    return 0;

}
*/