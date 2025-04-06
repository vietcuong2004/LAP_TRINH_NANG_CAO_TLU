#include<bits/stdc++.h>
using namespace std;

int SoTu(string s){
	int count=0;
	for (int i=0; i<s.length();i++){
	if((!isspace(s[i]) && isspace(s[i+1])) || (!isspace(s[i]) && s[i+1] == '\0'))
			count ++;
	}
	return count;
}

int NotAlnum(string s){
	int count=0;
	for (int i=0; i<s.length();i++){
		if(!isalnum(s[i]))
			count++;
	}
	return count;
}

void DeleteS(string &s){
	for (int i=0; i<s.length();i++){
		if(!isalnum(s[i])){
			s.erase(i,1);
			i--;
		}
	}
}

int main(){
	string s;
	cout << "Nhap xau S:";
	getline(cin,s);
	if(s == "")
		cout << "Xau rong!";
	else{
		cout << "So tu cua S: " << SoTu(s) << endl;
		cout << "So ky tu khong la chu cai/chu so: " << NotAlnum(s) << endl;
		DeleteS(s);
		cout << "Xau S sau khi xoa:" << s;
	}
	return 0;
}
