#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double s=0;
	cout << "N = ";cin >> n;
	for (int i=1; i<=n;i++){
		s += 1.0/i;
	}
	cout << "S = " <<s;
	return 0;
}
