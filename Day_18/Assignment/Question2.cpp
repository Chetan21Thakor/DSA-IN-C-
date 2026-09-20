#include <iostream>
using namespace std;

class BankAccount {
    private:
        long int accountNumber;
        long double balance=0;
    public:
        // Deposit
        long double deposit(long double addMoney){
            this->balance+=addMoney;
            return balance;

        }
        // Withdraw
        long double withDraw(long double minMoney){
            this->balance-=minMoney;
            return balance;

        }
        //Getters
        long int getAccountNumber(){
            return this->accountNumber;
        }

         long double getBalance(){
            return this->balance;
        }

         //Setters
         void setAccountNumber(long int accountNumber){
            this->accountNumber=accountNumber;
        }

        void setBalance(long double balance){
            this->balance=balance;
        }

        void showAccountInfo(){
            cout << "Account Number is : " <<this->accountNumber << endl;
            cout << "Balance is : " <<this->balance << endl;
        }
};

int main()
{
    BankAccount saveAcc;
    saveAcc.setAccountNumber(72878339);
    saveAcc.setBalance(29894);
    saveAcc.showAccountInfo();
    cout << "Current Balance is : " <<saveAcc.getBalance() << endl;
    cout << "After Adding Money Balance is : "<<saveAcc.deposit(23212)<<endl;
    cout << "After Adding Money Balance is : "<<saveAcc.withDraw(23212)<<endl;
    cout << "Current Balance is : " <<saveAcc.getBalance() << endl;

    return 0;
}