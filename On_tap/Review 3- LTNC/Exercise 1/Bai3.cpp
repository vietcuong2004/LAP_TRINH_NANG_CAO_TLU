#include<bits/stdc++.h>
using namespace std;

int SoTu(string s){
	int count = 0;
	for(int i=0;i<s.length();i++){
		if((!isspace(s[i]) && isspace(s[i+1])) || (!isspace(s[i]) && s[i+1] == '\0'))
			count++;
	}
	return count;
}

int TimXau(string s, string w){
	int pos = s.find(w);
	return pos;
}

int main(){
	string s,w;
	cout << "Nhap xau S:";
	getline(cin,s);
	cout << "So tu cua S: " << SoTu(s) << endl;
	cout << "Nhap xau W:";
	getline(cin,w);
	int pos = TimXau(s,w);
	if (pos < 0)
		cout << "Xau W khong xuat hien trong S!";
	else{
		cout << "Xau W xuat hien trong S tai vi tri: " << pos;
	}
	return 0;
}
