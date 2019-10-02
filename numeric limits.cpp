#include<iostream>
#include<limits>
using namespace std;

int main(){
cout<<"numeric limits for data types:"<<'\n';
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
cout<<"\n number of bytes for:\n";

cout<< "int:" << sizeof(int) << '\n';
cout<< "long:" << sizeof(long) << '\n';
cout<< "unsigned long:" << sizeof(unsigned long) << '\n';
cout<< "long long:" << sizeof(long long) << '\n';

cout<<"\nother data types displayed here \n";

cout<<"min float =   "<< numeric_limits<float>::min() << '\n';
cout<<"max float =  "<< numeric_limits<float>::max() << '\n';
cout<<"min double =  "<< numeric_limits<double>::min() << '\n';
cout<<"max double =  "<< numeric_limits<double>::max() << '\n';
cout<<"min long double =  "<< numeric_limits<long double>::min() << '\n';
cout<<"max long double =  "<< numeric_limits<long double>::max() << '\n';


cout<<"\nnumber of bytes for:\n";
cout<< "float:" << sizeof(float) << '\n';
cout<< "double:" << sizeof(double) << '\n';
cout<< "long double:" << sizeof(long double) << '\n';

cout<<"\ndegree of precision for:\n";
cout<<"floats =  "<< numeric_limits<float>::digits10 << '\n';
cout<<"doubles =  "<< numeric_limits<double>::digits10 << '\n';
cout<<"long doubles =  "<< numeric_limits<long double>::digits10 << '\n';


return 0;
}
