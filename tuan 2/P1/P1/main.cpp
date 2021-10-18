#include "myfraction.h"
#include"Myarray.h"





//int main() {
//	int x;
//	cin >> x;
//	Phanso ps1, ps2, kq;
//	ps1.nhap(); ps2.nhap();
//	//cong
//	kq = ps1 + ps2;
//	cout <<ps1<<" + "<<ps2<<" = "<<kq<<endl;
//	//nhan
//	kq = ps1 * ps2;
//	cout << ps1 << " . " << ps2 << " = " << kq<<endl;
//	//chia
//	kq = ps1 / ps2;
//	cout << ps1 << " / " << ps2 << " = " << kq<<endl;
//	Mang arr;
//	arr.nhap();
//	cout << arr;
//	return 0;
//}

int main() {
	int n, n1, n2;

	do {
		cout << "\t\t\tMENU" << endl;
		cout << "\n1.Phan so\n2.Mang\n0.ket thuc";
		cout << "\n\n\nChon bai muon lam: ";
		cin >> n;
		if (n == 1) {
			Phanso frac1, kq;
			Phanso frac;
			cout << "nhap phan so thu nhat"<<endl;
			frac.nhap();
			cout << "nhap phan so thu hai"<<endl;
			frac1.nhap();
			cout <<"\n"<< frac << ", " << frac1;
			do
			{
				cout << "\n\n\t1.gan gia tri cho tu, mau\n\t2.nghich dao\n\t3.rut gon\n\t4.Cac phep tinh\n\t0.back";
				cout << "\n\n\nChon: ";
				cin >> n1;
				switch (n1)
				{
				case 1:
				{
					cout << "\n\n\t1. set gia tri co phan so thu nhat";
					cout << "\n\t2. set gia tri co phan so thu hai";
					cout << "\n\n\nchon: ";
					cin >> n;

					int x, y;
					cout << "Gia tri muon gan cho tu: "; cin >> x;
					cout << "Gia tri muon gan cho mau: "; cin >> y;
					if (n1 == 1) {
						frac.setPS(x, y);
						cout <<"Phan so 1 da thay doi: "<< frac;
					}
					else if (n1 == 2) {
						frac1.setPS(x, y);
						cout <<"Phan so 2 da thay doi: "<< frac1;
					}
					break;
				}
				case 2:
				{
					Phanso frac3;
					frac3.NghichDao();
					cout << "Phan so nghich dao: "<<frac3;
					break;
				}
				case 3:
				{
					Phanso frac3;
					cout <<frac3.RutGon(frac);
					cout << "Phan so rut gon: " << frac3;
					break;
				}
				case 4:
				{
					int m;
					do
					{
						cout << "\n1.cong\n2.tru\n3.nhan\n4.chia\n0.back";
						cout << "\n\nChon: ";
						cin >> m;
						switch (m)
						{
						case 1:
						{
							kq = frac + frac1;
							cout << frac << " + " << frac1 << " = " << kq << endl;

							break;
						}
						case 2:
						{
							kq = frac - frac1;
							cout << frac << " - " << frac1 << " = " << kq << endl;

							break;
						}
						case 3:
						{
							kq = frac * frac1;
							cout << frac << " * " << frac1 << " = " << kq << endl;
							break;
						}
						case 4:
						{
							kq = frac / frac1;
							cout << frac << " / " << frac1 << " = " << kq << endl;

							break;
						}
						case 0:
							break;
						default:
						{
							cout << "Chon lai: ";
						}
						}
					} while (m != 0);
					break;
				}
				case 0:
					break;
				default:
				{
					cout << "Chon lai: ";
					break;
				}
				}
			} while (n1 != 0);
		}
		else if (n == 2) {
			int n;
			Mang arr;
			arr.nhap();
			do
			{
				cout << "\n\n\t1.Tim mot phan tu trong mang\n\t2.Sap xep mang tang dan\n\t3.Sap xep mang giam dan\n\t4.Tim kich thuoc cua mang\n\t0.back";
				cout << "\n\nChon: ";
				cin >> n2;
				switch (n2)
				{
				case 1:
				{
					int index, s;
					cout << "Phan tu muon tim: "; cin >> index;
					s = arr.getItem(index - 1);

					if (s != 0)
					{
						cout << "Phan tu muon tim co gia tri: " << s;
					}
					else cout << "Phan tu khong ton tai.";

					break;
				}

				case 2:
				{
					arr.mangtang();
					cout << arr;
					break;
				}

				case 3:
				{
					arr.manggiam();
					cout << arr;
					break;
				}

				case 4:
				{
					cout << "Kich thuoc cua mang: " << arr.getSize();
					break;
				}
				default:
				{
					cout << "Chon lai.";
				}
				}

				cout << "\n";
			} while (n2 != 0);
		}
	} while (n != 0);

	return 0;
}