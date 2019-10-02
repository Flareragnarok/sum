#include<iostream>
using namespace std;

int main(){
	
	unsigned int i = ~0;
	signed int j = i/2;
	cout << (signed int)i << endl;
	cout << j << endl;
	
	int a, b, c;
	cout << "input a, b and c please, we`ll see if c is between a and b\n";
	cin >> a >> b>> c;
	cout << (((c>=a)&&(c<=b))? "its inbetween":"its not inbetween") << endl;
	cout <<  ((a>b)?((a>c)?a:c):((b>c)?b:c)) << " is the highest number\n";
	int num = -1;
	char cha;
	cout <<"whats the thing you wanna convert to a roman numeral\n";
	cin >> cha;
	switch (cha) {
		case 'i': case 'I' : num = 1; break;
		case 'V' : num = 5; break;
		case 'X' : num = 10; break;
		case 'L' : num = 50; break;
		case 'C' : num = 100; break;
		case 'D' : num = 500; break;
		case 'M' : num = 1000; break;
		default  : num =0;
	}
	if (num>0){
		cout << "this is your roman number: "<< num;
	}
	else{ 
		cout << "this aint a roman number: ";
	}
	return 0;
}


