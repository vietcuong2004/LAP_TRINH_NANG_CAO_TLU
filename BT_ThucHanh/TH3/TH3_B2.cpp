#include <iostream>
using namespace std;
int main(){
	int m,n,s=0;
	cout << "M = ";cin >> m;
	cout << "N = ";cin >> n;
	for (int i=m;i<=n;i++){
		s += i;
	}
	cout <<">> Tong cac so nguyen tu M den N = " << s;
	return 0;
}
