#include<iostream>
#include<iomanip>
using namespace std;

class SavingsAccount
{
private:
    double savingsBalance;
    static double annualInterestRate;

public:
    SavingsAccount(double balance)
    {
        savingsBalance = balance;
    }

    void calculateMonthlyInterest()
    {
        double interest;
        interest = savingsBalance * annualInterestRate / 12;
        savingsBalance = savingsBalance + interest;
    }

    static void modifyInterestRate(double rate)
    {
        annualInterestRate = rate;
    }

    void displayBalance()
    {
        cout << "Updated Balance: Rs. "
             << fixed << setprecision(2)
             << savingsBalance << endl;
    }
};

double SavingsAccount::annualInterestRate = 0.0;

int main()
{
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    SavingsAccount::modifyInterestRate(0.04);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "After first month at 4% interest:\n";
    saver1.displayBalance();
    saver2.displayBalance();

    SavingsAccount::modifyInterestRate(0.05);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "\nAfter second month at 5% interest:\n";
    saver1.displayBalance();
    saver2.displayBalance();

    return 0;
}
