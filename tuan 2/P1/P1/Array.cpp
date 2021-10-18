#include "Myarray.h"

void Mang::nhap()
{
    cout << "Nhap so phan tu mang: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void Mang::set(int i, int x)
{
    a[i] = x;
}

ostream& operator<<(ostream& os, Mang arr){
    for (int i = 0; i < arr.size; i++)
        os <<arr.a[i]<<" ";
    os << endl;
    return os;
}

int Mang::getSize()
{
    return size;
}

int Mang::getItem(int index) {
    if (index > size || index < 0)
        return -1;
    else
        return a[index];
}

void Mang::mangtang()
{
    int c;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                c = a[j];
                a[j] = a[j - 1];
                a[j - 1] = c;
            }
        }
    }
}

void Mang::manggiam()
{
    int c;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (a[j] > a[j - 1])
            {
                c = a[j];
                a[j] = a[j - 1];
                a[j - 1] = c;
            }
        }
    }
}

int Mang::findX(int x) {
    for (int i = 0; i < size; i++)
        if (a[i] == x)
            return i;
    return -1;
}


