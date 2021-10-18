#include <iostream>
#ifndef _my_Array_
#define _my_Array_
#define MAX 100
using namespace std;

class Mang
{
public:
	int getSize();
	int getItem(int);
	void nhap();
	void set(int, int);
	void mangtang();
	void manggiam();
	int findX(int);
	friend ostream& operator<<(ostream& os, Mang a);
private:
	int size;
	int a[MAX];
};
#endif // !_my_Array_