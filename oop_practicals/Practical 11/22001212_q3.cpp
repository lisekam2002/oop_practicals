#include <iostream>
#include <string>

using namespace std;

class Transaction {
protected:
    int transaction_ID;
    string date;

public:
    Transaction() {
        transaction_ID = 0;
        date = "";
    }

    virtual void recordTransaction() {
        cout << "Enter Transaction ID: ";
        cin >> transaction_ID;
        cout << "Enter Transaction Date: ";
        cin >> date;
    }

    virtual void displayInfo() const {
        cout << "Transaction ID: " << transaction_ID << endl;
        cout << "Transaction Date: " << date << endl;
    }
};

class IncomeTransaction : public Transaction {
private:
    string source;
    double amountReceived;

public:
    void recordTransaction() override {
        Transaction::recordTransaction();
        cout << "Enter Source of Income: ";
        cin >> source;
        cout << "Enter Amount Received: ";
        cin >> amountReceived;
    }

    void displayInfo() const override {
        Transaction::displayInfo();
        cout << "Source of Income: " << source << endl;
        cout << "Amount Received: " << amountReceived << endl;
    }
};

class ExpenseTransaction : public Transaction {
private:
    string expenseCategory;
    double amountSpent;

public:
    void recordTransaction() override {
        Transaction::recordTransaction();
        cout << "Enter Expense Category: ";
        cin >> expenseCategory;
        cout << "Enter Amount Spent: ";
        cin >> amountSpent;
    }

    void displayInfo() const override {
        Transaction::displayInfo();
        cout << "Expense Category: " << expenseCategory << endl;
        cout << "Amount Spent: " << amountSpent << endl;
    }
};

int main() {
    IncomeTransaction incomeTransaction;
    ExpenseTransaction expenseTransaction;

    cout << "Recording Income Transaction:" << endl;
    incomeTransaction.recordTransaction();

    cout << "\nRecording Expense Transaction:" << endl;
    expenseTransaction.recordTransaction();

    cout << "\nDisplaying Income Transaction Details:" << endl;
    incomeTransaction.displayInfo();

    cout << "\nDisplaying Expense Transaction Details:" << endl;
    expenseTransaction.displayInfo();

    return 0;
}
