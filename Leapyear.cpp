#include <iostream>
using namespace std;

int main() {
   int inputYear;
   bool isLeapYear = false;
   
   cin >> inputYear;

    if (inputYear % 4 == 0){
        if (inputYear % 100 == 0){  
            if (inputYear % 400 == 0){
                isLeapYear = true;
            }
        }
        else{
            isLeapYear = true;

        }
        
    }

    cout << isLeapYear << endl;

    if (isLeapYear){
        cout << inputYear << " Is a leap year\n";
    }
    else
    {
        cout << inputYear << " Is not a leap year\n";
    }
    

   return 0;
}