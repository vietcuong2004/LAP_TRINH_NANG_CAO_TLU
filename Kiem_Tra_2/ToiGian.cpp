#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	int Tu;
	int Mau;
};

int GCD(int a, int b){
	while(b != 0){
		int t = b;
		b = a%b;
		a = t;
	}
	return a;
}

void ToiGian(PhanSo &kq){
	int t = GCD(kq.Mau,kq.Tu);
	kq.Mau /= t;
	kq.Tu /= t;
	if(kq.Mau < 0){
		kq.Mau *= -1;
		kq.Tu *= -1;
	}
}

int main(){
	PhanSo kq;
	cout << "Cho phan so a:\n";
	cout << "Tu: "; cin >> kq.Tu;
	cout << "Mau: "; cin >> kq.Mau;
	if (kq.Mau == 0)
		cout << "Phan so khong hop le!";
	else{
		ToiGian(kq);
		cout << "Chuan hoa phan so: " << kq.Tu << '/' << kq.Mau;
	}
	return 0;
}
