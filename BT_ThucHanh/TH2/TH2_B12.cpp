#include<iostream>
using namespace std;
int main(){
	int so_luong, don_gia;
	double tong_tien;
	cout << "So luong: "; cin >> so_luong;
	cout << "Don gia: "; cin >> don_gia;
	if (so_luong<=0 || don_gia<=0){
		cout << "So lieu khong hop le.";
	}
	else{
		if(so_luong>=10)
			tong_tien = so_luong * don_gia * 0.7;
		else if (so_luong>4 && so_luong<10)
			tong_tien = so_luong * don_gia * 0.85;
		else 
			tong_tien = so_luong * don_gia;
		cout << "Tong tien: " << tong_tien;
	}
	return 0;
}
