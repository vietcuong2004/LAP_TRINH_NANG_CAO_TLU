#include <bits/stdc++.h>
using namespace std;
int main(){
	double x;
	cout << "X = ";
	cin >> x;
	if (x>=0 && x!=4){
		double f=(x*x +1)/(sqrt(x) - 2);
		printf("F = %.2lf",f);
	}
	else
		cout << "Bieu thuc khong xac dinh!";
	return 0;
}
