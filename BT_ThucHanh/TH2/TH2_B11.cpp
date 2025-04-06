#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x,f;
	cout << "X = "; cin >> x;
	if (x>=0 && x!=3){
		f = (2*x*x +1 + sqrt(x)) / (x-3); 
	}
	else f=0;
	cout << "F(" << x<<") = " <<f;
	return 0;
}
