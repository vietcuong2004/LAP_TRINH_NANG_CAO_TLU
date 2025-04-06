#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	int Tu;
	int Mau;
};

int GCD(int a, int b){
	while(b!=0){
		int t = b;
		b = a%b;
		a = t;
	}
	return a;
}

PhanSo Hieu(PhanSo a, PhanSo b){
	PhanSo kq;
	kq.Tu = a.Tu*b.Mau - b.Tu*a.Mau;
	kq.Mau = a.Mau*b.Mau;
	return kq;
}

void ToiGian(PhanSo &kq){
	int t = GCD(kq.Mau,kq.Tu);
	kq.Mau /= t;
	kq.Tu /= t;
	if (kq.Mau < 0){
		kq.Mau *= -1;
		kq.Tu *= -1;
	}
}

void Nhap(PhanSo &x, char c){
	cout << "Phan so " << c << ":\n";
	cout << "Tu: "; cin >> x.Tu;
	cout << "Mau: "; cin >> x.Mau;
}

int main(){
	PhanSo a,b;
	Nhap(a,'a');
	Nhap(b,'b');

	if(a.Mau == 0 || b.Mau == 0)
		cout << "Co phan so khong hop le!";
	else{
		PhanSo kq = Hieu(a,b);
		ToiGian(kq);
		cout << "Hieu a - b = " << kq.Tu << "/" << kq.Mau;
	}
	return 0;
}
