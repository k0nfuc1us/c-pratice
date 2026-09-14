#include <iostream>
using namespace std;

int main() {
    float bill;
    cout << "Enter your bill : \n";
    cin >> bill;

    if (bill < 100) {
        cout << "No discount";
        cout << "your total is " << bill;
    }
    else if (bill >= 100 && bill < 500) {
        cout << "You got 10% discount\n";
        bill -= bill * 0.1;
        cout << "Your total is " << bill;
    }
    else {
        cout << "You got 20% Discount\n";
        bill -= bill * 0.2;
        cout << "Your total is " << bill;
    }
    return 0;
}
