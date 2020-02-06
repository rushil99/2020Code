#include <iostream>
using namespace std;

int main()
{

int highwayNumber;

cin >> highwayNumber ;

if(highwayNumber<=0 || highwayNumber >= 1000)
cout << highwayNumber << " is not a valid interstate highway number" << endl ;
else{
if(highwayNumber > 99){
cout << "I-"<<highwayNumber<< " is auxiliary, ";
int temp = highwayNumber % 100 ;
cout <<"serving I-"<<temp<<", ";
if(temp%2==0){
cout << "going east/west." << endl;
}
else{
cout << "going north/south." << endl;
}
}
else{
cout << "I-"<<highwayNumber<< " is primary, ";
if(highwayNumber%2==0){
cout << "going east/west." << endl;
}
else{
cout << "going north/south." << endl;
}
}
}
return 0;
}