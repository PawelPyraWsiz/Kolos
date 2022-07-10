// w66952.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Figura.h"

using namespace std;

int main()
{
	Figura p2(20.5, "zielony");
	cout << "Pole prostokata p2 jest rowne: " << p2.obliczPole();
	Figura k1("prostokat", 10, 20, "czerwony");
	Figura t1("trojkat", 13.5, 11.7, "czerwony");

	k1.piszDane();
	Figura p3 = p2;
	Figura t3(12);

	cout << "Pole figury k1 jest rowne: " << k1.obliczPole();
	cout << "Pole figury t1 jest rowne: " << t3.obliczPole();
	cout << t3 << endl;
}
