#include "myfraction.h"

ostream& operator<<(ostream& os, const Phanso& ps) {
	do {
		os << ps.tu << "/" << ps.mau;
	} while (ps.mau == 0);
	return os;
}


Phanso Phanso::operator+(const Phanso& ps) {
	Phanso kq;
	kq.tu = this->tu * ps.mau + this->mau * ps.tu;
	kq.mau = this->mau * ps.mau;
	return kq;
}

Phanso Phanso::operator-(const Phanso& ps) {
	Phanso kq;
	kq.tu = this->tu * ps.mau - this->mau * ps.tu;
	kq.mau = this->mau * ps.mau;
	return kq;
}

void Phanso::nhap() {
	do {
		cout << "Tu: "; cin >> tu;
		cout << "Mau "; cin >> mau;

	} while (mau == 0);
}

Phanso Phanso::operator *(const Phanso&ps) {
	Phanso kq;
	kq.tu = this->tu * ps.tu;
	kq.mau = mau * ps.mau;
	return kq;
}
Phanso Phanso::operator /(const Phanso&ps) {
	Phanso kq;
	kq.tu = tu * ps.mau;
	kq.mau = mau * ps.tu;
	return kq;
}

void Phanso::setPS(int newTu, int newMau) {
	this->tu = newTu;
	this->mau = newMau;
}

int Phanso::getTu() {
	return this->tu;
}

int Phanso::getMau() {
	return this->mau;
}

void Phanso::NghichDao()
{
	int c = tu;
	tu = mau;
	mau = c;
}

Phanso Phanso::RutGon(Phanso ps1) {
	int a, b;
	ps1.tu = this->tu;
	ps1.mau = this->mau;
	a = abs(ps1.tu);
	b = abs(ps1.mau);
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	ps1.tu = tu / a;
	ps1.mau = mau / a;

	return ps1;
}