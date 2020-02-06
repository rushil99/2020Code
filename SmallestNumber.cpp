#include <iostream>
using namespace std;

int main() {
   int variableA;
   int variableB;
   int variableC;
   
   cin >> variableA;
   cin >> variableB;
   cin >> variableC;

   if ((variableA < variableB) && (variableA < variableC)){
       cout << variableA << endl;
   }   
   else if ((variableB < variableA) && (variableB < variableC)){
       cout << variableB << endl;
   }
   else {
       cout << variableC << endl;
   }

   return 0;
}