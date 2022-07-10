#include "Figura.h"

Figura::Figura(double bokA, string kolor)
{
	this->typ = "nieznany";
	this->bokA = bokA;
	this->bokB = bokA;
	this->kolor = "nieznany";

}
Figura::Figura(string typ, double bokA, double bokB, string kolor)
{
	this->typ = typ;
	this->bokA = bokA;
	this->bokB = bokB;
	this->kolor = kolor;
}
Figura::Figura(double bokA)
{
	this->bokA = bokA;
	this->bokB = bokA;
	this->typ = "nieznany";
	this->kolor = "nieznany";

}
Figura::Figura(const Figura& cop)
{
	this->typ = typ;
	this->bokA = bokA;
	this->bokB = bokB;
	this->kolor = kolor;
	cout << "konstruktopr kopiujacy" << endl;
	piszDane();
}
Figura::~Figura()
{
	cout << endl << "destruktor run" << endl;
}
float Figura::obliczPole()
{
	return bokA * bokB;
}
void Figura::piszDane()
{
	cout << endl << "typ: " << this->typ << endl;
	cout << endl << "Bok A: " << this->bokA << endl;
	cout << endl << "Bok B: " << this->bokA << endl;
}
ostream& operator<<(ostream& wy, Figura& fi)
{
	wy << fi.typ;
	wy << fi.bokA;
	wy << fi.bokB;
	wy << fi.kolor;
	return wy;
}
