#include<iostream>
#include<limits>
using namespace std;

int main(){
	int ai {50000}; //initialization with 50k
	int bi {10000000}; //initialization with 1m
	int ci {ai*bi}; //init with produt of ai and bi
	
	cout<< "int numbers have: "<< 8*sizeof(int) << " Bits on your system\n";
	cout<< "here calculation with int: ";
	cout<< ai<< " * " << bi << " = "<< ci << '\n';
	cout<< "instead of 50 000 000 000, you got"<< ci << '\n';
	
	
	long al {50000L}; //init using L/l for long
	long bl {10000000L}; 
	long cl {al*bl}; //init with produt of al and bl
	
	cout<< "long numbers have: "<< 8*sizeof(long) << " Bits on your system\n";
	cout<< "here calculation with long: ";
	cout<< al<< " * " << bl << " = "<< cl << '\n';
	cout<< "instead of 50 000 000 000, you got "<< cl;
	al = (numeric_limits<long>::max()/2)+1000;
	cout << "2 * "<< al << " = " << (2*al) << "?\n";
	
	float a{1.234567E-7f};
	float b{1.000000f};
	float c{-b};
	cout << "imprecision for float-arithmetic:\n";
	cout << "(a+b)+c = " << (a+b)+c <<'\n';
	cout << "a+(b+c) = " << a+(b+c) <<'\n';
	return 0;
}
