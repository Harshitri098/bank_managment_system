#include<iostream>
#include<string>
using namespace std;
class BankAccount {
private:
    string name ;
    int accountNumber;
    double balance;

    public:

BankAccount(string n, int acc, double bal){
        name = n;
        accountNumber = acc;
        balance = bal;
    }
void deposit(double amount) {

    if( amount > 0){
        balance = balance + amount;
        cout<< " money deposited successfully! " << endl;

    }
    else{
        cout<< " invalide amount! "<< endl;
    }
}    
void withrawl( double amount) {

    if( amount > 0 && amount <= balance ){
        balance = balance - amount;
        cout<< " money withrawl successfully! " << endl;
    }
    else {
        cout<< " invalide amount! " << endl;

}
       
 }
    void displayDetails(){
        cout << " account holder: " << name <<endl;
        cout << " account number: " << accountNumber << endl;
        cout << " account balance: " << balance << endl;
        cout << endl;

    }

};
int main(){
    BankAccount account1(" arpit ", 12345, 500);
    
    BankAccount account2(" nikhil ", 23456, 300);
// aman ne sut** pe udda diye paise //
    BankAccount account3(" aman ", 56789 , 20);

//ACCOUNT 1.//   
    account1.deposit(1000);
    
    account1.withrawl( 500);

    account1.displayDetails();

    
//ACCOUNT 2.//
    account2.deposit(3000);

    account2.withrawl( 500);

    account2.displayDetails();

    
//ACCOUNT 3.//
    account3.deposit(2000);

    account3.withrawl( 500);

    account3.displayDetails();

    
    return 0;
}




