/**
 *   @file: atm.cc
 * @author: Aidan Nelson
 *   @date: 2.12.2023
 *  @brief: Add program Description
 */

#include <iostream>
#include <iomanip>

using namespace std;

///Constants and function prototypes

const int correctPin = 1234;
const double initialBalance = 1000.00;
double balance = initialBalance;
int pinAttempt = 0;
int pin;
bool pinCorrect = false;

int main(int argc, char const *argv[]) {

//code
 
cout << "Welcome to Bobcats Bank ATM machine" << endl;
 
 while (!pinCorrect && pinAttempt < 3) {
    cout << "Enter your PIN number: ";
    cin >> pin;
    if (pin == correctPin) {
        pinCorrect = true;
    } else {
        pinAttempt++;
        if (pinAttempt < 3) {
            cout << "Wrong PIN, please re-enter your PIN" << endl;
            cout << "You have " << 3 - pinAttempt << " tries left" << endl;
        } else {
            cout << "Too many tries, your account has been locked" << endl;
            
    return 0;

        }
    } 
}
    char anotherTransaction = 'y';
    while (anotherTransaction == 'y' || anotherTransaction == 'Y') {
        double withdrawAmount;
        cout << "Enter the amount you wish to withdraw: ";
        cin >> withdrawAmount;

        if (withdrawAmount > balance) {
            cout << "You do not have enough funds, please try again" << endl;

            } else {
            balance -= withdrawAmount;
            cout << "Your current balance is: $" << fixed << setprecision(2) << balance << endl;
        }
        cout << "Another transaction(y/n)? ";
        cin >> anotherTransaction;
    }
    cout << "Have a nice day" << endl;

    return 0;

    }