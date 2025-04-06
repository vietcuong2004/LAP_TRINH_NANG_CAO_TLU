#include <bits/stdc++.h>
using namespace std;
typedef long int T;

bool so_nguyen_to(int n){
	for (int i=2;i<=int(sqrt(n));i++){
		if (n%i == 0){
			return false;
		}
	}	
	return true;
}

int main(){
	int n,count=0,s=0;
	cout << "N = ";
	cin >> n;
	cout << "Cac so nguyen to [1;N]:";
	for (int i = 1;i<=n;i++){
		if (so_nguyen_to(i)){
			cout << "\t" << i;
			count ++;
			s += i;
		}
		continue;
	}
	cout << "\nTong cac so nguyen to: " << s;
	cout << "\nTBC cac so nguyen to: " << s*1.0/count;
	return 0;
}
