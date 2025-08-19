#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

void createAccount(string &userName, string &userSurname, int &pin, int &accountNumber, int &accountBalance){
    int placeHolder;

    cout << "Lets create an account for you ATSA" << endl;
    cout << "Please enter your name:" << endl;
    cin >> userName;

    cout << "Please enter your surname:" << endl;
    cin >> userSurname;

    cout << "Create a 4 digit pin" << endl;
    cin >> pin;

    cout << "How much would you like to add to your account" << endl;
    cin >> accountBalance;


    srand(time(0));
    placeHolder = rand() % 10000000 + 100000000;
    accountNumber = placeHolder;
    
    cout << "Dear" << userName << " " << userSurname << "you have sucessfully registered an account" << endl;
    cout << "Your account number is: " << accountNumber << endl;
    cout << "Your pin is: " << pin << endl;
    cout << "Your account balance is: " << accountBalance << endl;


}

void registeringUser(string &userName, string &userSurname, int &pin, int &accountNumber, int &accountBalance){

    ofstream outFile("userinfo.txt", ios::app);
    if(outFile.is_open()){

        outFile << userName << " " << userSurname << " " << pin << " " << accountNumber << " " << accountBalance << endl;
        outFile.close();

    }

}



int main() {
    int response;
    int pin;
    int accountNumber;
    int accountBalance = 0;
    bool isValid = true;
    string userName;
    string userSurname;

    while(isValid){
    cout << "Hello Welcome to Tshiamo Solutions ATM Machine" << endl;
    cout << "1. Log into account" << endl;
    cout << "2. Create new account" << endl;
    cout << "3. Exit" << endl;
    cin >> response;

    if(response == 1){
        
    }
    else if(response == 2){
        createAccount(userName, userSurname, pin, accountNumber, accountBalance);
        registeringUser(userName, userSurname, pin, accountNumber, accountBalance);
        break;

    }
    else if(response == 3){
        isValid = false;
    }

    return 0;
    }
}