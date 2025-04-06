#include <iostream>
using namespace std;
int main(){
	int m,n;
	cout << "M = ";cin >> m;
	cout << "N = ";cin >> n;
	cout <<">> Xep tang dan cac so nguyen tu M den N:";
	for (int i=m;i<=n;i++)
		cout << " " << i;
	cout <<"\n>> Xep giam dan cac so nguyen tu M den N:";
	for (int i=n;i>=m;i--)
		cout << " " << i;
	return 0;
}
