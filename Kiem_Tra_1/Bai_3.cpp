#include<bits/stdc++.h>
using namespace std;
int F(int n){
	if (n==1 || n==2)
		return 1;
	return F(n-1) + F(n-2);
}

int main(){
	int n;
	cout << "N = ";
	cin >> n;
	cout << "So Fibonnaci thu " << n << " la " << F(n);
	return 0;
}
