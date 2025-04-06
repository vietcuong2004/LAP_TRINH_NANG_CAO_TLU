#include<bits/stdc++.h>
using namespace std;

struct SoPhuc{
	double PhanThuc;
	double PhanAo;
};
typedef SoPhuc Z;

complex<double> Tich(Z z1, Z z2){
	complex<double> a(z1.PhanThuc,z1.PhanAo);
	complex<double> b(z2.PhanThuc,z2.PhanAo);
	complex<double> kq = a*b; 
	return kq;
}

complex<double> Tong(Z z1, Z z2){
	complex<double> a(z1.PhanThuc,z1.PhanAo);
	complex<double> b(z2.PhanThuc,z2.PhanAo);
	complex<double> kq = a+b; 
	return kq;
}

int main(){
	Z z1,z2;
	cout << "Cho so phuc z1:\n";
	cout << "Phan thuc: ";
	cin >> z1.PhanThuc;
	cout << "Phan ao: ";
	cin >> z1.PhanAo;
	cout << "Cho so phuc z2:\n";
	cout << "Phan thuc: ";
	cin >> z2.PhanThuc;
	cout << "Phan ao: ";
	cin >> z2.PhanAo;
	
	//tong:
	complex<double> s = Tong(z1,z2);
	if(s.imag() >= 0)
		cout << "z1 + z2 = " << s.real() << " + " << s.imag() << "i";
	else
		cout << "z1 + z2 = " << s.real() << " - " << -s.imag() << "i";
	cout << endl;
	//Tich:
	complex<double> kq = Tich(z1,z2);
	if(kq.imag() >= 0)
		cout << "z1 * z2 = " << kq.real() << " + " << kq.imag() << "i";
	else
		cout << "z1 * z2 = " << kq.real() << " - " << -kq.imag() << "i";
	return 0;
}
