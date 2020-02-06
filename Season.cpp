#include <iostream>
#include <string>
using namespace std;


/*
Spring: March 20 - June 20
Summer: June 21 - September 21
Autumn: September 22 - December 20
Winter: December 21 - March 19*/

int main() {
   string inputMonth;
   int inputDay;
   
   cin >> inputMonth;
   cin >> inputDay;
   
   if (inputMonth == "January" && inputDay > 0 && inputDay < 32){
       cout << "Winter\n";
   }
   else if (inputMonth == "Febuary" && inputDay > 0 && inputDay < 30){
       cout << "Winter\n";
   }
    else if (inputMonth == "March" && inputDay > 0 && inputDay < 31){
       if (inputDay < 20){
           cout << "Winter\n";
       }
       else if (inputDay > 20) {
           cout << "Spring\n";
       }
   }
   else if (inputMonth == "April" && inputDay > 0 && inputDay < 32){
       cout << "Spring\n";
   }
   else if (inputMonth == "May" && inputDay > 0 && inputDay < 31){
       cout << "Spring\n";
   }
   else if (inputMonth == "June" && inputDay > 0 && inputDay < 32){
       if (inputDay < 20){
           cout << "Spring\n";
       }
       else if (inputDay > 20 ) {
           cout << "Summer\n";
       }
   }
   else if (inputMonth == "July" && inputDay > 0 && inputDay < 31){
       cout << "Summer\n";
   }
   else if (inputMonth == "August" && inputDay > 0 && inputDay < 32){
       cout << "Summer\n";
   }
   else if (inputMonth == "September" && inputDay > 0 && inputDay < 31){
       if (inputDay < 21){
           cout << "Summer\n";
       }
       else if (inputDay > 21) {
           cout << "Autumn\n";
       }
   }
   else if (inputMonth == "October" && inputDay > 0 && inputDay < 32){
       cout << "Autumn\n";
   }
   else if (inputMonth == "November" && inputDay > 0 && inputDay < 31){
       cout << "Autumn\n";
   }
   else if (inputMonth == "Decemeber" && inputDay > 0 && inputDay < 32){
       if (inputDay > 20 ){
           cout << "Winter\n";
       }
       else if (inputDay > 20){
           cout << "Winter\n";
       }
   }
   else{
       cout << "Invalid\n";
   }
   return 0;
}