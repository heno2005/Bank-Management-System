#include <iostream>

using namespace std;

int main() {
    const int CORRECT_PIN = 1234;
    int current_balance = 1500;
    int pin_input;
    int withdraw_amount;
    int choice;

    cout << "--- ATM Transaction System ---" << endl;
    cout << "Enter your PIN: ";
    cin >> pin_input;

    if (pin_input == CORRECT_PIN) {
        cout << "Access Granted." << endl;

        do {
            cout << "\n1. Check Balance" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Exit" << endl;
            cout << "Select option: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Balance: $" << current_balance << endl;
                    break;

                case 2:
                    cout << "Enter amount: ";
                    cin >> withdraw_amount;

                    if (withdraw_amount <= current_balance) {
                        current_balance -= withdraw_amount;
                        cout << "Dispensing: $" << withdraw_amount << endl;
                        cout << "New Balance: $" << current_balance << endl;
                    } else {
                        cout << "Error: Insufficient funds." << endl;
                    }
                    break;

                case 3:
                    cout << "Session ended. Please take your card." << endl;
                    break;

                default:
                    cout << "Invalid selection." << endl;
            }
        } while (choice != 3);

    } else {
        cout << "Error: Invalid PIN. Access Denied." << endl;
    }

    return 0;
}
