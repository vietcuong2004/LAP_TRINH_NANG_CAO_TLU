#include<bits/stdc++.h>
using namespace std;
void Xoa(string &s){
	for (int i=0; i<s.length();i++){
		if (!isalnum(s[i]) && s[i] != ' '){
			s.erase(i,1);
			i--;
		}
	}
}

int main(){
	string s;
	cout << "Nhap xau s: ";
	getline(cin,s);
	Xoa(s);
	cout << "Xau sau khi xoa ki tu dac biet: " << s;
	return 0;
}
