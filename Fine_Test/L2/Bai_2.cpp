#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "N = "; cin >> n;
	long int A = 0;
	for (int i=1;i<=n;i++)
		A += (i-1)*i*(i+1);
	cout << "A = " << A;
	return 0;
}