#include <bits/stdc++.h>
using namespace std;
typedef long double T;
//Ham tinh giai thua:
int giai_thua(T n){
	T gt=1;
	for (int i=1;i<=n;i++)
		gt *= i;
	return gt;
}

// Ham tinh giai thua le:
int giai_thua_le(T n){
	T gt = 1;
	for (int i=1;i<=2*n+1;i+=2)
		gt *= i;
	return gt;
}

// Ham tinh giai thua chan:
int giai_thua_chan(T n){
	T gt = 2;
	for (int i=2; i<=2*n; i+=2)
		gt *= i;
	return gt;
}

int main(){
	T n;
		cout << "N = ";cin >>n;
	while(n<=0){
		cout << "\nNhap so N duong!\n";
		cout << "N = ";cin >>n;
	}
	cout << "\n>>Giai thua cua N = " << giai_thua(n);
	cout << "\n>>Giai thua le cua N = "<< giai_thua_le(n);
	cout << "\n>>Giai thua chan cua N = " << giai_thua_chan(n);
	return 0;
}
