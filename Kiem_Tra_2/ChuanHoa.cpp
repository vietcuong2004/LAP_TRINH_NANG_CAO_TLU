#include<bits/stdc++.h>
using namespace std;

void ChuanHoa(string &s){
	// Xoa dau cach dau chuoi:
	for(int i=0; i<s.length();i++){
		if(isspace(s[i])){
			s.erase(i,1);
			i--;
		}
		else break;
	}
	// Xoa dau cach o cuoi:
	for(int i=s.length()-1; i>=0; i--){
		if(isspace(s[i])){
			s.erase(i,1);
		}
		else break;
	}
	
	//Xoa giua:
	for(int i=0; i<s.length();i++){
		if(isspace(s[i]) && isspace(s[i+1])){
			s.erase(i,1);
			i--;
		}
	}
}

int SoTu(string s){
	int count = 0 ;
	for (int i=0; i<s.length();i++){
		if ((!isspace(s[i]) && isspace(s[i+1])) || (!isspace(s[i]) && s[i+1] == '\0'))
			count++;
	}
	return count;
}

int main(){
	string s;
	cout << "Nhap xau:";
	getline(cin,s);
	if(s == ""){
		cout << "Xau rong!";
		return 0;
	}
	else{
		ChuanHoa(s);
		cout << "Chuan hoa:" << s;
		cout << "\nSo tu:" << SoTu(s);
	}
	return 0;
}
