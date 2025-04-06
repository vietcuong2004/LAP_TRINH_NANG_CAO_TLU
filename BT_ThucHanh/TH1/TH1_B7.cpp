#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x1,y1,x2,y2,x3,y3,AB,AC,BC,p,S,C;
	cout << "Nhap vao diem A:"; cin >> x1 >> y1;
	cout << "Nhap vao diem B:"; cin >> x2 >> y2;
	cout << "Nhap vao diem C:"; cin >> x3 >> y3;
	//Tinh do dai cac canh:
	AB = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	AC = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	BC = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	//Kiem tra tam giac:
	if ((AB+AC<=BC) || (AB+BC<=AC) || (AC+BC<=AB))
		cout << "=>3 diem A,B,C khong tao thanh tam giac.";
	else{
		//Tinh chu vi, dien tich:
		C = AB + AC +BC;
		p = C/2.0;
		S = sqrt(p*(p-AB)*(p-AC)*(p-BC));
		//In ket qua ra man hinh:
		cout << "Chu vi C = " << C;
		cout << "\nDien tich S = " << S;
		}
	return 0;
}
