#include<bits/stdc++.h>
using namespace std;

bool DoiXung(string s){
	// Chuan hoa xau:
	for (int i=0; i<s.length();i++){
		s[i] = toupper(s[i]);
	}
	// So sanh:
	string w = s;
	reverse(w.begin(), w.end());
	if (w == s)
		return true;
	else return false;	
}

int main(){
	string s;
	cout << "Nhap xau s: ";
	getline(cin,s);    
	if(DoiXung(s))
		cout << "Xau doi xung!";
	else 
		cout << "Xau khong doi xung!";
	return 0;
}
