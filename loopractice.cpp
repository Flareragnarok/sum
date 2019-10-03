#include<iostream>
using namespace std;

int main(){
for (int i =0, k =4;i<400;++i, k++){
	cout<<i<< " = "<<(char)i<< k <<endl;
	}
	do{
	cout<< " one message for u my baby "<<endl;
		
	}while(false);
	
	while(true){
		char c;
		cin >> c;
		cout<<"\n you chose: "<< c <<endl;
		if (c=='a'){
			continue;
		}
		
		if (c=='x'){
		break;
		}
		cout <<"x is end"<< endl;	
	}
	while(true){
		char c;
		cin >> c;
		cout<<"\n you chose: "<< c <<endl;
		switch (c){
		case 'a' : continue;
		case 'x' : break;
		default: cout <<"x is end"<< endl; continue;
	}
		break;
	}
		
	
	return 0;
}
