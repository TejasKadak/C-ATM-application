#include <iostream>

using namespace std;

void showMenu(){
  cout << "******MENU******" << endl;
  cout << "1. Check Balance" << endl;
  cout << "2. Deposit" << endl;
  cout << "3. Withdraw" << endl;
  cout << "4. Exit" << endl;
  cout << "****************" << endl;
}

int main() {
   // check value, deposit, withdraw, show menu
  int option;
  
  double balance = 500;
 
  do{
   showMenu();
  cout << "Please Choose an option : ";
  cin >> option;
    // system("cls");

  switch(option){
    case 1: cout << "Balance is : "<< balance << "Rs" << endl ;
    break;
    
    case 2: cout << "Deposit amounmt : ";
    double depositAmount;
    cin >> depositAmount;
    balance += depositAmount;
    break;

    case 3: cout << "Withdraw amounmt : ";
    double withdrawAmount;
    cin >> withdrawAmount;

      if(withdrawAmount <= balance){
    balance -= withdrawAmount;
      }
      else{
        cout << "Not Enough Money" << endl;
      }
    break;
    
  }
  } while (option != 4);



  return 0;
  
}
