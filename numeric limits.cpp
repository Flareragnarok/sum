#include<iostream>
#include<limits>
using namespace std;

int main(){
cout<<"Grenzwerte für Ganzzahl-Typen:"<<'\n';
cout<<"int Minimum =    "<< numeric_limits<int>::min() << '\n';
cout<<"int Maximum =    "<< numeric_limits<int>::max() << '\n';

cout<<"long Minimum =    "<< numeric_limits<long>::min() << '\n';
cout<<"long Maximum =    "<< numeric_limits<long>::max() << '\n';

cout<<"long long Minimum =   "<< numeric_limits<long long>::min() << '\n';
cout<<"long long Maximum =   "<< numeric_limits<long long>::max() << '\n';

cout<<"unsigned Maxima(with minimum being 0):\n";

cout<<"unsigned int =   "<< numeric_limits<unsigned int >::max() << '\n';
cout<<"unsigned long =  "<< numeric_limits<unsigned long>::max() << '\n';
cout<<"unsigned long long =  "<< numeric_limits<unsigned long long>::max() << '\n';
cout<<"\n Anzahl der bytes für:\n";

cout<< "int:" << sizeof(int) << '\n';
cout<< "long:" << sizeof(long) << '\n';
cout<< "long:" << sizeof(unsigned long) << '\n';
cout<< "long long:" << sizeof(long long) << '\n';


return 0;
}
