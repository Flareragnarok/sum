// cppbuch/k1/bloecke.cpp
#include <iostream>
using namespace std;
// a und b werden außerhalb eines jeden Blocks deklariert. Sie sind damit innerhalb
// eines jeden anderen Blocks gültig und heißen daher globale Variablen.
int a{1};
int b{2};

int main() { // Ein neuer Block beginnt.
cout << "globales a= " << a << '\n'; // Ausgabe von a
// Innerhalb des Blocks wird nun eine Variable a deklariert. Ab jetzt ist das globale a noch
// gültig, aber nicht mehr unter dem Namen a sichtbar, wie die Folgezeile zeigt.
int a{10};
// Der Wert des lokalen a wird ausgegeben:
cout << "lokales a= " << a << '\n';
// Das globale a lässt sich nach der Deklaration des lokalen a nur noch mithilfe des
// Bereichsoperators :: (englisch scope operator) ansprechen. Ausgabe von ::a.
cout << "globales ::a= " << ::a << endl;
{ // Ein neuer Block innerhalb des bestehenden beginnt.
int b{20};
// Variable b wird innerhalb dieses Blocks deklariert.
// Damit wird das globale b zwar nicht ungültig, aber unsichtbar.
int c{30}; // c wird innerhalb dieses Blocks deklariert.
// Die Werte von b und c werden ausgegeben.
cout << "lokales b = " << b << '\n';
cout << "lokales c = " << c << '\n';
// Wie oben beschrieben, ist das globale b nur über den
// Scope-Operator ansprechbar. Ausgabe von ::b.
cout << "globales ::b = " << ::b << '\n';
} // Der innere Block wird geschlossen. Damit ist das globale b
// auch ohne Scope-Operator wieder sichtbar:
cout << "globales b wieder sichtbar: b = " << b << '\n';
// cout << "c = " << c << ’\n’; // Fehler, siehe Text
} // Ende des äußeren Blocks
