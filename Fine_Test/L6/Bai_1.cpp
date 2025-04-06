#include <bits/stdc++.h>
using namespace std;
void nhap(int n,vector <int> &A){
	int x;
	for (int i=0; i<n; i++){
		cout << "a[" << i << "] = ";
		cin >> x;
		A.push_back(x);
	}
}

void xuat(vector <int> A){
	for (int i = 0; i<A.size();i++){
		cout << " " << A[i];
	}
}

int so_am(vector <int> A){
	int count = 0;
	for (int i = 0; i<A.size();i++){
		if (A[i]<0)
			count++;
	}
	return count;
}

int main(){
	int n;
	vector <int> V;
	cout << "N = ";
	cin >> n;
	nhap(n,V);
	cout << "Day A =";
	xuat(V);
	cout << "\nSo so am trong A: " << so_am(V);
	return 0;
}