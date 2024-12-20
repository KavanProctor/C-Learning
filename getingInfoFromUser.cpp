#include <iostream>


int main()
{
    int age;//name the variable
    std::string fullname;

    std::cout << "What is your fullname: ";
    std::getline (std::cin,fullname);// allows us to read the entire line


    std::cout << "What is your age: "; //ask user for info
    std::cin >> age; //store the response(but won't do anything after a space is provided)

    std::cout << fullname << '\n';
    std::cout << age << '\n'; //print the response

    return 0;
}
// if we want to do the getline() function after using cin somewhere else we need to add getline(std::cin >> std::ws, [variable name])