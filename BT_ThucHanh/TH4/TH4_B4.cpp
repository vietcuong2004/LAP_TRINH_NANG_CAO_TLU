#include<bits/stdc++.h>
using namespace std;
typedef float T;

void nhap(int n,vector<T> &A){
	T x;
	for (int i=0; i<n;i++){
		cout << "A[" << i << "] = ";
		cin >> x;
		A.push_back(x);
	}
}

void xuat(vector<T> V){
	for (int i=0; i<V.size();i++){
		cout << " " << V[i];
	}
}

void tach_day(T x,vector<T> A,vector<T> &A1,vector<T> &A2){
	for (int i=0; i<A.size();i++){
		if (A[i]<x){
			A1.push_back(A[i]);
		}
		else
			A2.push_back(A[i]);
	}
}

int main(){
	vector<T> A,A1,A2;
	int n;
	cout << "N = ";
	cin >> n;
	cout << "Nhap cac phan tu:\n";
	nhap(n,A);
	cout << "A =";
	xuat(A);

	T x;
	cout << "\nX = "; cin >> x;
	tach_day(x,A,A1,A2);
	cout << "Day gom cac phan tu nho hon x: ";
	xuat(A1);
	cout<<"\nDay con lai: ";
	xuat(A2);
	return 0;
}