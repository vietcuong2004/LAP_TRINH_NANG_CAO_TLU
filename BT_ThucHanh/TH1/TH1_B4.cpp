#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//Cau (a):
	int n; 
	float x;
	cout << ("a)\n");
	cout << ("n = "); cin >> n;
	cout << ("x= "); cin >> x;
	if (x<=0)
		cout << "MATH ERROR!";
	else{
		cout << ">> A = " << pow(3,n)+5*fabs(x)+log(3*x);
	}
	
	//Cau (b):
	float a,b,c,p;
	double s;
	cout << "\n\nb)";
	cout << "Nhap vao 3 canh tam giac:\n";
	cout << "a = ";cin >> a;
	cout << "b = ";cin >> b;
	cout << "c = ";cin >> c;
	if ((a<=0) || (b<=0) || (c<=0))
		cout << ">> Canh tam giac phai lon hon 0.";
	else if ((a+b<=c) || (a+c<=b) || (b+c<=a))
		cout << ">> 3 canh vua nhap khong tao thanh 1 tam giac.";
	else{
		p= (a+b+c)/2.0;
		float s= sqrt(p*(p-a)*(p-b)*(p-c));
		cout << ">> p = "<< p;
		cout << "\n>> S = " << s;
		}

	return 0;
}
