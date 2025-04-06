#include<bits/stdc++.h>
using namespace std;

void ChuanHoa(string &s){
	for (int i=0; i<s.length();i++){
		if (!isalnum(s[i]) && s[i] != ' '){
			s.erase(i,1);
			i--;
		}
	}
}

int SoTu(string s){
	int count=0;
	for (int i=0; i<s.length();i++)
		if (!isspace(s[i]) && isspace(s[i+1]) || !isspace(s[i]) && s[i+1] == '\0')
			count++;
	return count;
}

int main(){
	string s;
	cout << "Nhap xau S:";
	getline(cin,s);
	ChuanHoa(s);
	cout << "Xau S sau khi xoa:" << s;
	cout << "\nSo tu cua S:"<< SoTu(s);
	return 0;
}
