#include<bits/stdc++.h>
using namespace std;

int SoTu(string s){
	int count = 0;
	for (int i=0; i<s.length();i++){
		if(!isspace(s[i]) && isspace(s[i+1]) || !isspace(s[i]) && s[i+1] == '\0')
			count ++;
	}
	return count;
}

void ChuanHoa(string &s){
	for(int i=0; i<s.length(); i++)
		if(isdigit(s[i])){
			s.erase(i,1);
			i--;
		}
}

int main(){
	string s;
	cout << "Nhap xau S:";
	getline(cin,s);
	cout << "So tu cua S:" << SoTu(s);
	ChuanHoa(s);
	cout <<"\nXau S sau khi xoa:" << s;
	return 0;
}
