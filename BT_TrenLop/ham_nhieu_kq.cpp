#include <iostream>
using namespace std;

double hcn(double a, double b,double &cv){
	double dt = a*b;
	cv = (a+b)*2;
	return dt;
}

int main(){
	double a,b,cv;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	//Ham hcn chi tra ve ket qua dien tich, nhung van tinh toan ca chu vi:
	cout << "Dien tich: " << hcn(a,b,cv);
	cout << "\nChu vi: "<< cv;
	return 0;
}