#include<iostream>
#include <vector>
#include<string>
#include <cstddef>

struct Person {
	std::string firstname;
	std::string lastname;
	int age;
};

enum class Color { yellow = 0, red = 1, blue = 2, green = 3 };
enum class Palette { white = 0, blue = 1, amber = 4, purple = 8 } mixture;


struct Point {
	int x;
	int y;
	bool visible;
	Color color;
}p;


int main(){
	std::cout << "big problem, gimme numbre thatll get hueg!!!\n";
	unsigned long long t;
	int iter = 0;
	unsigned long long highest = 0;
	std::cin >>t;
	while (t != 1) {
		std::cout << t << std::endl;
		if (t % 2 == 0) {
			t /= 2;
		}
		else {
			t = 3 * t + 1;
		}
		if (t > highest) {
			highest = t;
		}
		iter++;
	}
	std::cout << highest << ": highest number archieved! Iterations: " << iter << std::endl;



	std::vector<int> data;
	int value;
	std::string nombre;
	std::cout << " please gimmea number and ill convert it to long:\n";
	std::cin >> nombre;
	unsigned long f = 0;
	unsigned long h = 0;
	for (size_t i =0, temp; i < nombre.length(); i++) {
		temp = ((int) nombre.at(i) - (int) '0');
		f = 10 * f + temp;
		h += temp;
	}
	std::cout << f<<" is your final nombre musta grande\n";
	std::cout << h << " is the sum of all components\n";

	const int a = -99;
	const int b = 100;
	std::vector<int> g;
	std::vector<int> r{0,0,0,0,0,0,0,0,0,0,0};
	for (int i = a; i < b; i += 20) {
		g.push_back(i);
	}
	g.push_back(b);
	int y;
	do {
		std::cin >> y;
		switch ((y + 99)/20) {
		case 0:r[0]++; continue;
		case 1:r[1]++; continue;
		case 2:r[2]++; continue;
		case 3:r[3]++; continue;
		case 4:r[4]++; continue;
		case 5:r[5]++; continue;
		case 6:r[6]++; continue;
		case 7:r[7]++; continue;
		case 8:r[8]++; continue;
		case 9:r[9]++; continue;
		case 10:r[9]++; continue;
		}
	} while (y <= b && y >= a);

	for (size_t i = 0; i < size(g)-1; i++) {
		std::cout << a + (20 * i) << " sector had " << r[i] << "entries \n";
	}



	std::cout << "for my next number, id like to return to the classics\n";
	std::cin >> nombre;
	const std::string SYMBOLS = nombre;
	nombre = "";
	std::string z;

	for (size_t i = 0, temp; i < SYMBOLS.length(); i++) {
		temp = ((int)SYMBOLS.at(i) - (int)'0');

		switch (SYMBOLS.length()-1 - i) {

		case 0:
			if (temp < 4) {
				for (int j = temp; j != 0; j--) {
					nombre += "I";
				}
			}
			if (temp == 4) {
				nombre += "IV";
			}
			if (temp > 4 && temp < 9) {
				nombre += "V";
				for (int j = temp - 5; j != 0; j--) {
					nombre += "I";
				}
			}
			if (temp == 9) {
				nombre += "IX";
			} break;
		case 1: if (temp < 4) {
			for (int j = temp; j != 0; j--) {
				nombre += "X";
			}
		}
			  if (temp == 4) {
				  nombre += "XL";
			  }
			  if (temp > 4 && temp < 9) {
				  nombre += "L";
				  for (int j = temp - 5; j != 0; j--) {
					  nombre += "X";
				  }
			  }
			  if (temp == 9) {
				  nombre += "XC";
			  }break;
		case 2: if (temp < 4) {
			for (int j = temp; j != 0; j--) {
				nombre += "C";
				}
			}
			if (temp == 4) {
				  nombre += "CD";
			}
			if (temp > 4 && temp < 9) {
				  nombre += "D";
				  for (int j = temp - 5; j != 0; j--) {
					  nombre += "C";
				  }
			}
			if (temp == 9) {
				  nombre += "CM";
			}break;
		case 3: for (int j = temp; j != 0; j--) {
				nombre += "M";
			}break;
		}
		if ((SYMBOLS.length() - 4) > i) {
			z += SYMBOLS.at(i);
		}
	}
	std::cout <<z+ " times M + "+ nombre +'\n';
	



	do {
		std::cout << "plsx inpwut yowr data hewe uwu(pwess 0 to camcel)" << std::endl;
		std::cin >> value;
		if (value != 0) {
			data.push_back(value);
		}
	} while (value != 0);

	std::cout << "hewe is youwr data mistewr owO:" << std::endl;
	for (size_t i = 0; i < size(data); ++i) {
		std::cout << i << "is ekwal two =w=" << data[i]<<std::endl;
	}

	Person per;
	std::cout << "please enter first, last name and age of your new person\n";
	std::cin >> per.firstname >> per.lastname >> per.age;
	std::cout << per.firstname << per.lastname << " age:" << per.age <<std::endl;

	Color fellow = Color::yellow;
	std::cout << "fellow";
	std::cout << "\nmegatwerks";

	std::vector<int> v(3);
	v = { 1,2,3 };
	std::cout << v.size()<< std::endl;
	std::cout << v[1] << std::endl;
	for (size_t i = 0; i < v.size(); ++i) {
		std::cout << v[i]<< std::endl;
	}

	Color* jello, ass = Color::blue;
	int i = (int)Palette::white;
	mixture = Palette::blue;
	if (mixture < Palette::purple) {
		mixture = Palette::amber;
	}
	enum class byte : unsigned char {};

	Point q;
	p.color = Color::red;
	p.visible = true;
	q = p;
	q.x = 0;
	q.y = 1;

	std::string x = "astring";


}
