#include <iostream>
using namespace std;

int main() {

    int variableA;
    int variableB;
    int variableC;
    int small;
   
    cin >> variableA;
    cin >> variableB;
    cin >> variableC;

    if ((variableA < variableB) && (variableA < variableC)){
       small = variableA;
    }   
    else if ((variableB < variableA) && (variableB < variableC)){
       small = variableB;
    }
    else {
       small = variableC;
    }

    variableA = variableA - small;
    variableB = variableB - small;
    variableC = variableC - small;

    cout << variableA << " " << variableB << " " << variableC << endl;
    

   return 0;
}
