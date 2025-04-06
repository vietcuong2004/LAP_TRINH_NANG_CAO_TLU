#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y;
	cout << "X = "; cin >> x;
	cout << "Y = "; cin >> y;
	double F = pow(x,5) + 5*pow(x,5.0/3) - 6;
	double G= x*y - pow(x,2) + x*y*y - pow(y,3);
	cout << "F(x,y) = x^5 + 5x^(5/3) - 6 = " << F;
	cout << "\nG(x,y) = xy - x^2 + xy^2 -y^3 = " << G;
	return 0;
}
