#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "N = ";
	cin >> n;
	double F = 0;
	for (int i=n; i>0;i--){
		F = sqrt(F + i);
	}
	cout << "F(n) = " << F;
	return 0;
}