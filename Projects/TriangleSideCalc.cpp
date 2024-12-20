#include <iostream>
#include <cmath>


int main()
{
    double a;
    double b;

    std::cout <<"Welcome to the right triangle calculator, please provide sides a and b so we can calculate the hypotenus for you" << '\n';
    std::cout <<"Enter the first side of the triangle:";
    std::cin >> a;
    std::cout <<"Enter the second side of the triangle:";
    std::cin >> b;

    const double c = sqrt((a * a) + (b * b));
    std::cout <<c << '\n';

    return 0;

}