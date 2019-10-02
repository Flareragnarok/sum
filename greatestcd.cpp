#include<iostream>
using namespace std;

int main(){
unsigned int i, j,k;
cout <<"GIMME TWO NOMBRES, ILL FIND DA GREATEDST COMMON DIVISOR\n";
cin >> i >> j;

cout << "the greatest common divisor between "<<i<< " and "<<j<< " is:";
while (i!=j){
	if (i>j){
		i = i-j;
	}
	else{
		j = j-i;
	}
	}
	cout<< i<<endl;
cout<< "next, ill show you, if this number is a prime or not, ENTER IT\n";
cin >>k;
i=2;

bool ass = true;
while((i < k/2) && ass){
	if (k%i==0){
	ass =false;
	}
	i++;
	}	
if (ass){
	cout << "nombre primo musta!";
}
else{
	cout << "oh noooooooooooooo";
}
cout<<"\now.... illl uhhh calculate the factorial of the number you uhhhh give me\n";
cin >> k;
double answer =1;
for(int f =2; f<=k;f++){
	answer *=f;
}
cout<<answer;

}


