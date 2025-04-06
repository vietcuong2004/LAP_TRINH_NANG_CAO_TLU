#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	int TuSo;
	int MauSo;
};
typedef PhanSo T;

// Tim ucln:
int GCD(int a, int b){
	while (b!=0){
		int t = b;
		b = a%b;
		a = t;
	}	
	return a;
}

// Rut gon: chia ca tu va mau cho UCLN;
void RutGon(T &kq){
	int a = GCD(kq.MauSo,kq.TuSo);
	kq.MauSo /= a;
	kq.TuSo /= a;	
	if (kq.MauSo<0){ // Dao dau ket qua neu co dau '-'
		kq.MauSo *= -1;
		kq.TuSo *= -1;
	}
}

T TinhTong(T a, T b){
	T kq;
	kq.MauSo = a.MauSo*b.MauSo;
	kq.TuSo = a.TuSo*b.MauSo + b.TuSo*a.MauSo;
	RutGon(kq);
	return kq;
}

bool KiemTraPhanSo(T a){
	if (a.MauSo == 0){
		return false;
	}
	return true;
}

int main(){
	PhanSo A,B;
	cout << "Phan so a:\n";
	cout << "Tu: "; cin>>A.TuSo;
	cout << "Mau: "; cin >> A.MauSo;
	cout << "Phan so b:\n";
	cout << "Tu: "; cin >> B.TuSo;
	cout << "Mau: "; cin >> B.MauSo;
	if (!KiemTraPhanSo(A) || !KiemTraPhanSo(B)){
		cout << "Co phan so khong hop le!";
	}
	else{
		T kq = TinhTong(A,B);
		cout << "Tong a + b = " << kq.TuSo << "/" << kq.MauSo;
	}
	return 0;
	
}
