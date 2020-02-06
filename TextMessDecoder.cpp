#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

    string message1;
    string str1 = "LOL";
    string str2 = "IDK";
    string str3 = "BFF";
    string str4 = "IMHO";
    string str5 = "TMI";
    

    cout << "Input an abbreviation:\n";
    cin >> message1;


    if (message1 == str1){
        cout << "laughing out loud\n";
    }
    else if (message1 == str2){
        cout << "I don't know\n";
    }
    else if (message1 == str3){
        cout << "best friends forever\n";
    }
    else if (message1 == str4){
        cout << "in my humble opinion\n";
    }
    else if (message1 == str5){
        cout << "too much information\n";
    }
    else{
        cout << "Unknown\n";
    }
    
   return 0;
}