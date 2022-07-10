#pragma once
#include<iostream>
using namespace std;

class Figura
{
private:
	double bokA;
	double bokB;
	string kolor;
	string typ;
public:
	Figura(double bokA, string kolor);
	Figura(string typ, double bokA, double bokB, string kolor);
	Figura(double bokA);
	Figura(const Figura& cop);
	float obliczPole();
	friend ostream& operator<<(ostream& wy, Figura& fi);
	void piszDane();
	~Figura();

};

