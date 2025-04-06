#include<iostream>
#include<cmath>
using namespace std;

const double Pi = 3.14;
int main(){
	double a,b,c,s;
	cout << "Nhap vao canh a: ";cin >> a;
	cout << "Nhap vao canh b: ";cin >> b;
	cout << "Nhap vao canh c: ";cin >> c;
	//Kiem tra tam giac:
	if ((a<=0) || (b<=0))
		cout << "=>Nhap sai, canh tam giac phai lon hon 0!";
	else if ((c<=0) || (c>=180))
		cout << "=>Nhap sai, goc tam giac thuoc (0;180)!";
	else{
	//Tinh dien tich tam giac:
		//Doi goc C tu degree sang radian:
		double rad=c*Pi/180.0;
		//Tinh dien tich voi goc tinh theo rad:
		s=1.0/2 *a*b*sin(rad);
		cout << "Dien tich tam giac S = " << s ;
		}
	return 0;
}
