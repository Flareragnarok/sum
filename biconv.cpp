#include<iostream>
using namespace std;

int main(){
	cout << "input the number to convert to a bitstring\n";
	int i;
	unsigned int j = ~0;
	int f = j/2;
	f = ~f;
	cout <<f<<endl;
	
	cin >> i;
	while (j!=0){
		if (i&f){
			cout <<1;
		}
		else{
		cout << 0;
		}
		i<<=1;
		j<<=1;
	}
	cout << endl;
	
	int n,m;
	cin >> n >>m;
	if (n==m){
		cout << n <<" is the sum of all numbers between " << n <<" and "<<m<<endl;
	}
	else if (n<m){
		int sum = 0;
		for (int f = n; f <= m; f++){
			sum +=f;
		}
		cout << sum <<" is the sum of all numbers between " << n <<" and "<<m<<endl;
	}
	else if(m<n) {
		int sum = 0, f = m;
		do{
			sum +=f;
			f++;
		}while(f<=n);
		cout << sum <<" is the sum of all numbers between " << n <<" and "<<m<<endl;
	}
	cin >> n >>m;
	if (n==m){
		cout << n <<" is the sum of all numbers between " << n <<" and "<<m<<endl;
	}
	else{
		int a = n > m? n : m;
		int b = n > m? m : n;
		int sum = (a*(a+1)/2)-(b*(b+1)/2) + b;
		cout << sum <<" is the sum of all numbers between " << n <<" and "<<m<<endl;
	}
	
}
