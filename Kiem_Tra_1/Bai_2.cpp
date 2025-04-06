#include<bits/stdc++.h>
using namespace std;
void nhap(vector<double> &A, int &n){
	double x;
	for (int i=0; i<n;i++){
		double x;
		cout << "A[" << i+1 << "] = ";
		cin >> x;
		A.push_back(x);
	}
}

void xuat(vector<double> A){
	for (int i=0;i<A.size();i++)
		cout << " " << A[i];
}

void sap_xep(vector<double> &A){
	sort(A.begin(),A.end());
	reverse(A.begin(),A.end());
}

int main(){
	int n;
	vector<double> A;
	do{
		cout << "Nhap n = ";
		cin >> n;
	}
	while(n<=0 || n>=100);
	nhap(A,n);
	
	double x;
	cout << "Cho so x = ";
	cin >> x;
	A.push_back(x);
	cout << "Day so:";
	xuat(A);
	
	sap_xep(A);
	cout << "\nDay sap xep:";
	xuat(A);
	return 0;
}
