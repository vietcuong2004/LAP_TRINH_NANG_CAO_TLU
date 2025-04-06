#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	char c;
	cout << "Nhap xau: ";
	getline(cin,s);
	cout << "Nhap ky tu: ";
	cin >> c;
	int count1 = count(s.begin(),s.end(),c);
	if (count1 ==0 )
		cout << "ky tu khong xuat hien trong xau!";
	else{
		cout << "ky tu xuat hien " << count1 << " lan trong xau!";
	}
	return 0;
}
