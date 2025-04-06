#include<bits/stdc++.h>
using namespace std;

bool doi_xung(string ban_dau){
	// Tạo xâu dao_nguoc là bản sao của xau ban_dau:
	string dao_nguoc = ban_dau;
	// Đảo ngược xâu dao_nguoc, so sánh với xâu ban_dau và đưa ra kết quả 
	reverse(dao_nguoc.begin(),dao_nguoc.end());
	if (dao_nguoc == ban_dau)
		return true;
	else 
		return false;
}

int main(){
	string str;
	cout << "Nhap xau: ";
	getline(cin,str);
	if (doi_xung(str))
		cout << "Xau doi xung!";
	else cout << "Xau khong doi xung!";
}