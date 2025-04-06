#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,w;
	cout << "Nhap xau S: ";
	getline(cin,s);
	cout << "Nhap xau W: ";
	getline(cin,w);
	int pos = s.find(w);
	if (pos == -1){
		cout << "W khong xuat hien trong S";
	}
	else
		cout << "W xuat hien trong S o vi tri " << pos;
	return 0;
}
