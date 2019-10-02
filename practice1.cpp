#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

int main(){
float f;
const float PI = 3.1415926f;
cout<< "please input a number:\n";
cin >> f;
cout <<"your number = " << f <<'\n';
cout <<"fabs() = " << fabs(f) <<'\n';
cout <<"sqrt() = " << sqrt(f) <<'\n';
cout <<"exp() = " << exp(f) <<'\n';
cout <<"sin() = " << sin(f) <<'\n';
cout <<"cos() = " << cos(f) <<'\n';
cout <<"log() = " << log(f) <<'\n';
cout <<"pi = "<< PI<<'\n';

return 0;
}
