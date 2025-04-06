#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x;
	cout << "X = ";cin >> x;
	if (x<0)
		cout << "Khong tinh duoc";
	else{
		cout << "Can bac 4 cua X = " << pow(x,0.25);
	}
	return 0;
}
