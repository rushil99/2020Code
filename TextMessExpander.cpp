#include <iostream>
#include <string> 
using namespace std;

int main() {

   string message1;
    string str1 = "BFF";
    string str2 = "IDK";
    string str3 = "JK";
    string str4 = "TMI";
    string str5 = "TTYL";


    //Get's user input and displays it
    cout << "Enter text:\n";
    getline(cin, message1);
    cout << "You entered: " << message1 << endl;

   if (message1.find(str1) >= 0 && message1.find(str1) <= message1.length()){
       message1.replace(message1.find(str1), 3, "best friend forever");
       //cout << str1 << ": best friend forever" << endl;
    }
   if (message1.find(str2) >= 0 && message1.find(str2) <= message1.length()){
       message1.replace(message1.find(str2), 3, "I don't know");
       //cout << str2 << ": I don't know" << endl;
    }
   if (message1.find(str3) >= 0 && message1.find(str3) <= message1.length()){
       message1.replace(message1.find(str3), 2, "just kidding");
       //cout << str3 << ": just kidding" << endl;
    }
   if (message1.find(str4) >= 0 && message1.find(str4) <= message1.length()){
       message1.replace(message1.find(str4), 3, "too much information");
       //cout << str4 << ": too much information" << endl;
    }
   if (message1.find(str5) >= 0 && message1.find(str5) <= message1.length()){
       message1.replace(message1.find(str5), 4, "talk to you later");
       //cout << str5 << ": talk to you later" << endl;
    }

    cout << "Expanded: " << message1 << endl;
    

   return 0;
}