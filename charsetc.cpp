#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

int main(){
	if(numeric_limits<char>::is_signed){
	cout << "char wird auf diesem System als signed interpretiert.\n";
}
else {
cout << "char wird auf diesem System als unsigned interpretiert.\n";
}
cout << "Grenzwerte für char, in int umgewandelt:\n";
cout << "Minimum= " << static_cast<int>(numeric_limits<char>::min()) << '\n';
cout << "Maximum= " << static_cast<int>(numeric_limits<char>::max()) << '\n';

const char STAR{'*'};
char a;
cout << STAR<<'\n';
a =  'a';
cout << a<<'\n';
cout << static_cast<int>(a)<<'\n';
cout << char(97)<< '\n';
char c {'5'};
int ziffer {c - '0'};
cout << ziffer << '\n';
ziffer = int(c)-int('0');
cout << ziffer << '\n';


return 0;
}
