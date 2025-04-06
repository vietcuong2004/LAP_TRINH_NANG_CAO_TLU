#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int count = 0;
	cout << "Nhap S: ";
	getline(cin,s);
	for (int i=0; i<s.length();i++){
		if (isupper(s[i])){
			count ++;
		}
	}
	cout << "So chu cai viet hoa: " << count;
	return 0;
}
