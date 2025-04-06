#include<bits/stdc++.h>
using namespace std;
int main(){
	string w;
	cout << "Nhap W = ";
	getline(cin,w);
	for (int i = 0; i<w.length();i++){
		if (isdigit(w[i])){
			w.erase(i,1);
			i--;
		}
	}
	cout << "W sau khi xoa cac chu so = " << w;
	return 0;
}