#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
		cout << "N = ";
		cin >> n;
	}
	while(n<=0 || n>=10);
	cin.ignore();
	string s,kq;
	int min = 9999;
	for(int i=1; i<=n;i++){
		cout << "Ho ten thu " << i << ": ";
		getline(cin,s);
		if(s.length()<min){
			min = s.length();
			kq = s;
		}
	}
	cout << "Ho ten ngan nhat (dau tien): " << kq;
	return 0;
}
