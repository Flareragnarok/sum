#include<iostream>
using namespace std;

int main(){ //sum of two numbers
	int sum;
	int summand1;
	int summand2;
	
	cout <<"Please input two numbers" << '\n';
	cin >> summand1 >> summand2;
	//calculates the sum of both numbers
	sum = summand1 + summand2;
	
	//display sum on the console
	cout << "Sum = " << sum << '\n' << sum << " = " << summand1 << "+" << summand2;
	return 0;
}
