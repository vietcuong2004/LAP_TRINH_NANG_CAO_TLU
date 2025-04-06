#include <iostream>
using namespace std;
int main(){
	double a,b,c;
	cout << "Nhap vao 3 canh: ";
	cin >> a >> b >> c;
	if(a+b>c && a+c>b && b+c>a){
		if (a==b || a==c || b==c){
			if (a==b && b==c)
				cout << "La tam giac deu";
			else
				cout << "La tam giac can";
		}
		else 
			cout << "La tam giac";
	}
	else cout << "Khong phai 3 canh tam giac";
	return 0;
}
