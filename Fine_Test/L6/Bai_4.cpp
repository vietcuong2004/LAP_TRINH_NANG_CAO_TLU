#include <bits/stdc++.h>
using namespace std;

void tim_min_str(int n){
	string s,result;
	int min_len = 1000;
	for (int i = 1;i<=n;i++){
		cout << "Ten ngon ngu lap trinh thu " << i << ": ";
		getline(cin,s);
		if (s.length() <= min_len){
			min_len = s.length();
			result = s;
		}
	}
	cout << "Ngon ngu ngan nhat cuoi cung la: " << result;
}

int main(){
	int n;
	cout << "N = "; cin >> n;
	getchar();
	tim_min_str(n);
	return 0;
}
