#include<bits/stdc++.h>
using namespace std;

struct SoPhuc{
	double Thuc;
	double Ao;
};

void Nhap(SoPhuc &x, int i){
	cout << "Cho so phuc z" << i << ":\n";
	cout << "Phan thuc: "; cin >> x.Thuc;
	cout << "Phan ao: "; cin >> x.Ao;
}

SoPhuc Tich(SoPhuc z1, SoPhuc z2){
	SoPhuc kq;
	kq.Thuc = z1.Thuc*z2.Thuc - z1.Ao*z2.Ao;
	kq.Ao = z1.Thuc*z2.Ao + z1.Ao*z2.Thuc;
	return kq;
}

SoPhuc Tong(SoPhuc z1, SoPhuc z2){
	SoPhuc kq;
	kq.Thuc = z1.Thuc + z2.Thuc;
	kq.Ao = z1.Ao + z2.Ao;
	return kq;
}

int main(){
	SoPhuc z1,z2;
	Nhap(z1,1);
	Nhap(z2,2);
	SoPhuc tong = Tong(z1,z2);
	SoPhuc tich = Tich(z1,z2);
	cout << "z1 + z2 = " << tong.Thuc << " + " << tong.Ao << "i\n";
	cout << "z1 * z2 = " << tich.Thuc << " + " << tich.Ao << "i";
	return 0;
}
