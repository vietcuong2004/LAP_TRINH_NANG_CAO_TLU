#include<bits/stdc++.h>
using namespace std;
int SoTu(string s){
	int count = (s[0] != ' ');
	for (int i=0;i<s.length();i++){
		if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0')
			count++;
	}
	return count;
}

void XoaSo(string &s){
	for (int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			s.erase(i,1);
			i--;
		}
	}
}

int main(){
	string s;
	cout << "Nhap xau S:";
	getline(cin,s);
	cout << "So tu cua S:" << SoTu(s) << "\n";
	XoaSo(s);
	cout << "Xau S sau khi xoa:" << s;
	return 0;
}
