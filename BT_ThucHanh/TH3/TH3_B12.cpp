#include <bits/stdc++.h>
using namespace std;

int giai_thua(int n){
	int gt=1;
	for (int i=1;i<=n;i++)
		gt *= i;
	return gt;
}

int main(){
	int n;
	double s=0;
	cout << "N = "; cin >> n;
	for (int i=1;i<=n;i++){
		s += 1.0/giai_thua(i);
	}
	cout << "S = " << s;
	return 0;
}
