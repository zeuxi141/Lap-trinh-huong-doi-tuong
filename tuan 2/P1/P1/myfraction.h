#include <iostream>
#ifndef _my_fraction_
#define _my_fraction_

using namespace std;

class Phanso

{
public:
	void nhap();
	//ham cong
	Phanso operator +(const Phanso&);
	//ham tru
	Phanso operator -(const Phanso&);
	//ham xuat
	friend ostream& operator<<(ostream& os, const Phanso&ps);
	//ham nhan
	Phanso operator *(const Phanso&);
	//ham chia
	Phanso operator /(const Phanso&);
	//
	void setPS(int, int);
	void NghichDao();
	int getTu();
	int getMau();
	Phanso RutGon(Phanso ps1);
private:
	int tu;
	int mau;
};
#endif // !_my_fraction_