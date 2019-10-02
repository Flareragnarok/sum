#include<iostream>
#include<limits>
#include<cmath>
using namespace std;
int main(){


bool istGrossBuchstabe;
char c;
cin >> c;
istGrossBuchstabe = (c >= 'A') && (c <= 'Z');
cout << istGrossBuchstabe<<'\n'; // Wandlung in int
cout.setf(ios_base::boolalpha); // Textformat einschalten
cout << istGrossBuchstabe<<'\n'; // true oder false
cout.unsetf(ios_base::boolalpha); // Textformat ausschalten
cout << istGrossBuchstabe<<'\n'; // nun wieder int

bool wahrheitswert {true};
wahrheitswert = !wahrheitswert ; // Negation
cout << wahrheitswert << '\n'; // 0, d.h. false
// Beispiel mit int-Zahlen: Aus 0 wird 1 und aus einer Zahl ungleich 0
// wird durch die Negation eine 0:
int i {17};
int j {!i}; // 0 (implizite Typumwandlung)
cout << "j is now: "<< j << '\n';
i= !j;
cout << "i is now: "<< i << '\n';
wahrheitswert = 99;
cout.setf(ios_base::boolalpha);
cout << wahrheitswert << '\n';

int f {2};
int g {10};
int& r {f};
r = 10;
r = g;
int& s = r;
cout << f << '\n';
r = r+r, r++;
cout << f << '\n';

long a = 4294967364;
short b = a;
cout << b<< '\n';

double e = 3/4;
cout << e<< '\n';
e = 3./4;
cout << e<< '\n';
}
