#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x,f;
	cout << "X = "; cin >> x;
	if (x>=1){
		f = x*x*x + sqrt(x-1) + 3*exp(x);
		cout << "f(" << x<<") = " <<f; 
	}
	else 
		cout << "f(x) khong xac dinh!";

	return 0;
}
