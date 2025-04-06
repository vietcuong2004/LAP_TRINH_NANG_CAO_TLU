#include <iostream>
#include <cstdio> //dung de goi ham gets
using namespace std;
int main(){
	//Nhap chuoi co chua dau cach:
	char name[100];
	cout << "Nhap vao ten cua ban: ";
	gets(name);
	cout << "Ten cua ban la: " << name;
	
	//Nhap chuoi khong chua dau cach:
	string your_class;
	cout << "\nNhap vao lop cua ban: ";
	cin >> your_class;
	cout << "Lop cua ban la: " << your_class;
	return 0;
}

