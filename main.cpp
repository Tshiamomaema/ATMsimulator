#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void createAccount(string userName, string userSurname){
    cout << "Lets create an account for you ATSA" << endl;
    cout << "Please enter your name:" << endl;
    cin >> userName;

   // cout << "Please enter your surname:\n" << endl;
   // getline(cin, userSurname);


    cout << "Your name is " << userName << " and your surname is " << userSurname << endl;

}



int main() {
    int response;
    int pin;
    int accountNumber;
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
        createAccount(userName, userSurname);
        break;

    }
    else if(response == 3){
        isValid = false;
    }

    return 0;
    }
}