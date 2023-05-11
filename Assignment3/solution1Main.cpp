#include <iostream>
#include <fstream>
#include "S1class.h"
using namespace std;

int main() {
	//akali.dat
	ST ak;

	int n1 = 5;
	int n2 = 10;
	float a = 2.0;
	float b = 3.0;
	float x = -5.0;
	float dx = 0.1;
	float m = 10.0;

	int aa1[6];
	float bb1[10], cc1[10];

	ak.f1(n1, n2, aa1);
	ak.f2(a, b, x, dx, m, bb1, cc1);

	ofstream Akali;
	Akali.open("akali.dat", ios::binary | ios::out);
	Akali.write(reinterpret_cast<char*>(&n1), sizeof(int));
	Akali.write(reinterpret_cast<char*>(&n2), sizeof(int));
	Akali.write(reinterpret_cast<char*>(&a), sizeof(float));
	Akali.write(reinterpret_cast<char*>(&b), sizeof(float));
	Akali.write(reinterpret_cast<char*>(&x), sizeof(float));
	Akali.write(reinterpret_cast<char*>(&dx), sizeof(float));
	Akali.write(reinterpret_cast<char*>(&m), sizeof(float));
	Akali.write(reinterpret_cast<char*>(ak.sum1), sizeof(int) * 6);
	Akali.write(reinterpret_cast<char*>(ak.sum2), sizeof(float) * 10);
	Akali.close();

	//amumu.dat
	ST am;

	n1 = 7;
	n2 = 100;
	a = -3.5;
	b = 4.;
	x = 100.;
	dx = 10.;
	m = 15.;

	int aa2[94];
	float bb2[15], cc2[15];

	am.f1(n1, n2, aa2);
	am.f2(a, b, x, dx, m, bb2, cc2);

	ofstream Amumu;
	Amumu.open("amumu.dat", ios::binary | ios::out);
	Amumu.write(reinterpret_cast<char*>(&n1), sizeof(int));
	Amumu.write(reinterpret_cast<char*>(&n2), sizeof(int));
	Amumu.write(reinterpret_cast<char*>(&a), sizeof(float));
	Amumu.write(reinterpret_cast<char*>(&b), sizeof(float));
	Amumu.write(reinterpret_cast<char*>(&x), sizeof(float));
	Amumu.write(reinterpret_cast<char*>(&dx), sizeof(float));
	Amumu.write(reinterpret_cast<char*>(&m), sizeof(float));
	Amumu.write(reinterpret_cast<char*>(am.sum1), sizeof(int) * 94);
	Amumu.write(reinterpret_cast<char*>(am.sum2), sizeof(float) * 15);
	Amumu.close();

	//annie.dat
	ST an;

	n1 = 12;
	n2 = 17;
	a = 0.01;
	b = 0.2;
	x = 1.5;
	dx = 0.08;
	m = 20.;

	int aa3[6];
	float bb3[20], cc3[20];

	an.f1(n1, n2, aa3);
	an.f2(a, b, x, dx, m, bb3, cc3);

	ofstream Annie;
	Annie.open("annie.dat", ios::binary | ios::out);
	Annie.write(reinterpret_cast<char*>(&n1), sizeof(int));
	Annie.write(reinterpret_cast<char*>(&n2), sizeof(int));
	Annie.write(reinterpret_cast<char*>(&a), sizeof(float));
	Annie.write(reinterpret_cast<char*>(&b), sizeof(float));
	Annie.write(reinterpret_cast<char*>(&x), sizeof(float));
	Annie.write(reinterpret_cast<char*>(&dx), sizeof(float));
	Annie.write(reinterpret_cast<char*>(&m), sizeof(float));
	Annie.write(reinterpret_cast<char*>(an.sum1), sizeof(an.sum1));
	Annie.write(reinterpret_cast<char*>(an.sum2), sizeof(an.sum2));
	Annie.close();

	//ashe.dat
	ST as;

	n1 = 10;
	n2 = 20;
	a = 4.2;
	b = -5.3;
	x = 2.1;
	dx = 0.2;
	m = 5;

	int aa4[11];
	float bb4[5], cc4[5];

	as.f1(n1, n2, aa4);
	as.f2(a, b, x, dx, m, bb4, cc4);

	ofstream Ashe;
	Ashe.open("ashe.dat", ios::binary | ios::out);
	Ashe.write(reinterpret_cast<char*>(&n1), 4);
	Ashe.write(reinterpret_cast<char*>(&n2), 4);
	Ashe.write(reinterpret_cast<char*>(&a), 4);
	Ashe.write(reinterpret_cast<char*>(&b), 4);
	Ashe.write(reinterpret_cast<char*>(&x), 4);
	Ashe.write(reinterpret_cast<char*>(&dx), 4);
	Ashe.write(reinterpret_cast<char*>(&m), 4);
	Ashe.write(reinterpret_cast<char*>(as.sum1), sizeof(int) * 11);
	Ashe.write(reinterpret_cast<char*>(as.sum2), sizeof(float) * 5);
	Ashe.close();
}