#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; Complex version of typedef

typedef std::string text_t;
int main(){
    //pairlist_t pairlist; usage of compelx typedef

    text_t FirstName = "Kavan";

    std::cout << FirstName << '\n';
    return 0;
}