#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x;
	cout << "X = ";cin >> x;
	if (x<0)
		cout << "Bieu thuc khong xac dinh!";
	else{
		double f = double((exp(x)-1))/(sqrt(x)+1);
		cout << "F(x) = " <<f;
	}
	return 0;
}
