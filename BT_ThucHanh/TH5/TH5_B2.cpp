#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout << "Nhap S: ";
	getline(cin,s);
	if(s.length()==0)
		cout << "xau dau vao rong!";
	else{
		cout << "Xau vua nhap: " << s;
		reverse(s.begin(),s.end());
		cout << "\nXau dao nguoc: " << s;
	}
	return 0;
}
