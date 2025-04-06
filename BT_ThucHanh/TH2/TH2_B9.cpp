#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x,f;
	cout << "X = "; cin >> x;
	if (x>0 && x!=2){
		f = (x*x + 2*sqrt(x)) / (x-2); 
	}
	else f=0;
	cout << "F(" << x<<") = " <<f;
	return 0;
}
