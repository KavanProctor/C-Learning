#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; Complex version of typedef

//typedef std::string text_t; how to use typedef

using text_t = std::string; //Using the using keyword
int main(){

    //pairlist_t pairlist; usage of compelx typedef

    text_t FirstName = "Kavan";

    std::cout << FirstName << '\n';
    return 0;
}