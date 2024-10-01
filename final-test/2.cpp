#include<iostream>
#include<string>
using namespace std;

class Bank {
public:
    int ac_no;
    string ac_name;
    string ac_type;
    string ac_branch;
    double ac_balance;
};

int main() {
    const int MAX_ACCOUNTS = 100;
    Bank accounts[MAX_ACCOUNTS];
    int num_accounts = 0;


    accounts[num_accounts++] = { 1234, "Alice", "Savings", "Main Branch", 1000.0 };
    accounts[num_accounts++] = { 5678, "Bob", "Checking", "Downtown Branch", 500.0 };
    accounts[num_accounts++] = { 9012, "Charlie", "Savings", "Main Branch", 2000.0 };

    
    int search_ac_no;
    cout << "Enter account number to search: ";
    cin >> search_ac_no;

    bool found = false;
    for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].ac_no == search_ac_no) {
            cout << "Account found:" << endl;
            cout << "Account Number: " << accounts[i].ac_no << endl;
            cout << "Account Name: " << accounts[i].ac_name << endl;
            cout << "Account Type: " << accounts[i].ac_type << endl;
            cout << "Account Branch: " << accounts[i].ac_branch << endl;
            cout << "Account Balance: $" << accounts[i].ac_balance << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Account not found." << endl;
    }

    return 0;
}

