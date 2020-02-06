#include <iostream>
using namespace std;

/*
Write a program with total change amount as an integer input, 
and output the change using the fewest coins, one coin type per line. 
The coin types are Dollars, Quarters, Dimes, Nickels, and Pennies. 
Use singular and plural coin names as appropriate, like 1 Penny vs. 2 Pennies.*/

int main() {
    int total;
    cin >> total;

    //handle the 0 case
    if (total == 0){
        cout << "No Change\n";
    }
   
    int numDollars;
    int numQuarters;
    int numDimes;
    int numNickles;
    int numPennies;

    /*
    450
    dollars: 4
    quarters: 2 
    */

   // Find number of follar coins
    numDollars = total/100;
    // subtract dollar amount from total
    total -= numDollars * 100;

    numQuarters = total/25;
    total -= numQuarters * 25;

    numDimes = total/10;
    total -= numDimes * 10;

    numNickles = total/5;
    total -= numNickles * 5;

    numPennies = total;


    if (numDollars > 0){
        if (numDollars == 1){
            cout << numDollars << "Dollars\n";
        }
        else{
            cout << numDollars << "Dollars\n";
        }
    }

    if (numQuarters > 0){
        if (numQuarters == 1){
            cout << numQuarters << "Quarters\n";
        }
        else{
            cout << numQuarters << "Quarters\n";
        }
    }

    if (numDimes > 0){
        if (numDimes == 1){
            cout << numDimes << "Dimes\n";
        }
        else{
            cout << numDimes << "Dimes\n";
        }
    }

    if (numNickles > 0){
        if (numNickles == 1){
            cout << numNickles << "Nickels\n";
        }
        else{
            cout << numNickles << "Nickles\n";
        }
    }

    if (numPennies > 0){
        if (numPennies == 1){
            cout << numPennies << "Pennies\n";
        }
        else{
            cout << numPennies << "Pennies\n";
        }
    }

   return 0;
}