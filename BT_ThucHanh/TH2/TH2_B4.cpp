#include <iostream>
using namespace std;
int main(){
	double dtb;
	cout << "Nhap DTB: "; cin >> dtb;
	if (dtb<4.5)
		cout << "Hoc luc Yeu";
	else if (dtb>=4.5 && dtb<7)
		cout << "Hoc luc Trung Binh";
	else if (dtb>=7 && dtb<8.5)
		cout << "Hoc luc Kha";
	else
		cout << "Hoc luc Gioi";
	return 0;
}
