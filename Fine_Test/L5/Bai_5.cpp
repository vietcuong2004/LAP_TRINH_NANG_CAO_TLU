#include<bits/stdc++.h>
using namespace std;
int main(){
	string w,s;
	cout << "Nhap W = ";
	getline(cin,w);
	s = w + w + w;
	cout << "Cac xau con la:\n";
	for (int i=0; i<s.length();i+=3){
		cout << s.substr(i,3) << endl;
	}
	return 0;
}