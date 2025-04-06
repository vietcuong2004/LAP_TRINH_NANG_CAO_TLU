#include<bits/stdc++.h>
using namespace std;
int main(){
	double e,x,s=0;
	int n = 0;
	cout << "Sai so e = "; 
	cin >> e;
	if (e<=0 || e>=1)
		cout << "e khong thoa man!";
	else{
		cout << "x = ";
		cin >> x;
		do{
			n++;
			s += pow(x,n-1)*1.0/(n);
		}
		while (1.0/(n+1) >=e || 1.0/n <e);
		cout << "Tong S = " << s;
	}
	return 0;
}