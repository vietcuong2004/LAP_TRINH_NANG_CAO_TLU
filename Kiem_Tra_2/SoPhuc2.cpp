#include<bits/stdc++.h>
using namespace std;

struct SoPhuc{
	double Thuc;
	double Ao;
};
typedef SoPhuc T;

void Nhap(T &z,int i){
	cout << "Cho so phuc z" << i << ":\n";
	cout << "Phan thuc: "; cin >> z.Thuc;
	cout << "Phan ao: "; cin >> z.Ao;
}

T Tong(T z1, T z2){
	T kq;
	kq.Thuc = z1.Thuc + z2.Thuc;
	kq.Ao = z1.Ao + z2.Ao;
	return kq;
}

T Tich(T z1, T z2){
	T kq;
	kq.Thuc = z1.Thuc*z2.Thuc - z1.Ao*z2.Ao;
	kq.Ao = z1.Thuc*z2.Ao + z1.Ao*z2.Thuc;
	return kq;
}

void Xuat(char PhepTinh, T kq){
	cout << "z1 " << PhepTinh << " z2 = " << kq.Thuc << " + " << kq.Ao << "i";
}

int main(){
	T z1,z2;
	// Nhap 2 so thuc:
	Nhap(z1,1);
	Nhap(z2,2);
	// tinh tong:
	T tong = Tong(z1,z2);
	Xuat('+',tong);
	// Tinh Tich:
	cout << endl;
	T tich = Tich(z1,z2);
	Xuat('*',tich);
	return 0;
}
