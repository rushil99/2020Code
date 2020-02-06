#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   int primaryNumber;

   cin >> highwayNumber;

    if ((highwayNumber > 1) && (highwayNumber < 99)){
        if (highwayNumber % 2 == 0){
            cout << "I-" << highwayNumber << " is primary, going east/west\n";
        }
        else{
            cout << "I-" << highwayNumber << " is primary, going north/south\n";
        }
    }
    else    {
        highwayNumber %= 100;
        primaryNumber = highwayNumber;
        if ((highwayNumber > 99) && (highwayNumber < 999)){
            if (highwayNumber % 2 == 0){
            cout << "I-" << highwayNumber << " is auxiliary, serving I-" << primaryNumber << ", going east/west\n";
            }
            else{
            cout << "I-" << highwayNumber << " is auxiliary, serving I-" << primaryNumber << ", going north/south\n";
        }
        
            }

        else {
        cout << highwayNumber << " is not a valid interstate highway number.\n";
        }
        }
    }


   return 0;
}
