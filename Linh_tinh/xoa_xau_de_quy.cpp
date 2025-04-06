#include<bits/stdc++.h>
using namespace std;
void xoa_xau(string &xau_can_xoa){
	if (xau_can_xoa.length() == 0) // Dieu kien dung: do dai xau bang 0
		return; // khong tra ve gia tri nao (khong thuc hien lenh nao khi do dai xau =0)
	int end = xau_can_xoa.length() - 1; // end la vi tri phan tu cuoi cung cua xau
	xau_can_xoa.erase(end,1); // Xoa 1 ki tu cuoi cung cua xau
	return xoa_xau(xau_can_xoa);
}

int main(){
	string xau_ban_dau;
	cout << "Nhap xau: ";
	getline(cin,xau_ban_dau);
	cout << "Xau vua nhap: " << xau_ban_dau;
	xoa_xau(xau_ban_dau);
	cout << "\nXau sau khi xoa: " << xau_ban_dau;
	return 0;
}
