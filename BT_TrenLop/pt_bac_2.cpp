#include <iostream>
#include <cmath> //thu vien dung cho pow, sqrt, sin, cos ...
#include <cstdio> //thu vien nay dung de chay cac cu phap trong C (printf,scanf,gets...)
using namespace std;
int main(){
	double a,b,c;
	//Nhap phuong trinh:
	cout << "Phuong trinh bac 2: a*x^2 + b*x + c = 0 ";
	cout << "\n----------------------------------------\n";
	cout << "Nhap vao a: "; cin >> a;
	cout << "Nhap vao b: "; cin >> b;
	cout << "Nhap vao c: "; cin >> c;
	//Tinh toan:
	double delta= b*b - 4*a*c;
	if (delta == 0){
		cout << ">>Phuong trinh cho co nghiem kep x = " << -b/(2*a);
	}
	else if (delta > 0){
		double x1 = (-b + sqrt(delta))/(2*a);
		double x2 = (-b - sqrt(delta))/(2*a);
		cout << ">>Phuong trinh co 2 nghiem phan biet: X1 = " << x1 << " ,X2 = " << x2 ;
		
		//Hien thi 2 chu so thap phan sau dau phay:
		cout << "\n>>Lay 2 chu so thap phan sau dau phay cua 2 nghiem:  ";
		//Thu vien <cstdio> se cho phep soan code theo ngon ngu C:
		printf("\nX1 = %.2f",x1);
		printf("\nX2 = %.2f",x2);
	}
	else {
		cout << "Phuong trinh vo nghiem";
	}
	return 0;
}
