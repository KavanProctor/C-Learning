#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{
  bakePizza();
  bakePizza("Pepperoni");
  bakePizza("Pepperoni","Bacon");

  return 0;
}

void bakePizza(){
  std::cout << "Here is your pizza" << std::endl;
  }

void bakePizza(std::string topping1) {
  std::cout << "Here is your " << topping1 << " Pizza" << std::endl;
}

void bakePizza(std::string topping1, std::string topping2) {
  std::cout << "Here is your " << topping1 << " and " << topping2 << " Pizza" << std::endl;
}
