#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "N = ";
	cin >> n;
	int m=0,s=0;
	while (s+m+1<n){
		m++;
		s+=m;
	}
	cout << "m lon nhat = " << m;
	return 0;
}