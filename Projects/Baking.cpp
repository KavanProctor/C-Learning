#include <iostream>
#include <iomanip>


void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main()
{
    double balance = 0;
    int choice = 0;
do{
    std::cout<<"**********************************"<<std::endl;
    std::cout<<"Please select one of the following options \n";
    std::cout<<"1.Show Money \n2.Deposit \n3.Withdraw \n 4. Exit \n";
    std::cout<<"**********************************"<<std::endl;
    std::cout << "Which option would you like: ";
    std::cin>>choice;

    std::cin.clear();
    fflush(stdin);

    switch(choice){
        case 1:
            showBalance(balance);
        break;
        case 2:
            balance = balance + deposit();
            showBalance(balance);
            break;
        case 3:
            balance = balance - withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thank you for using our bank today \n";
            break;
        default:
            std::cout<<"Please Enter a valid choice"<<std::endl;
        }
}while(choice != 4);

  return 0;
}

void showBalance(double balance){
    std::cout<<"The balance is "<<std::setprecision(2) << std::fixed <<balance<<std::endl;
  }

double deposit(){
    double amount = 0;
    std::cout<<"Please enter the amount of deposit: ";
    std::cin>>amount;
    if (amount > 0) {
        return amount;
    }
    else {
        std::cout<<"Please enter a valid amount"<<std::endl;
        return 0;
    }
}
double withdraw(double balance) {
    double amount = 0;
    std::cout<<"Please enter the amount you would like to take out: ";
    std::cin>>amount;
    if (amount > balance) {
        std::cout<<"I'm Sorry you do not have enough money to withdrawal the amount required"<<std::endl;
        return 0;
    }
    else if (amount < 0) {
        std::cout<<"That is not a valid amount"<<std::endl;
        return 0;
    }
    else {
        return amount;
    }

}