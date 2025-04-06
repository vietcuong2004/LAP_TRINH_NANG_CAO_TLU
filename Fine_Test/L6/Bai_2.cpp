#include <bits/stdc++.h>
using namespace std;
void nhap(int n,vector <float> &A){
	float x;
	for (int i=0; i<n; i++){
		cout << "a[" << i << "] = ";
		cin >> x;
		A.push_back(x);
	}
}

void xuat(vector <float> A){
	for (int i = 0; i<A.size();i++){
		cout << " " << A[i];
	}
}

float tim_min(vector <float> A){
	float kq = A[0];
	for (int i = 1; i<=A.size();i++){
		kq = min(kq,A[i]);
	}
	return kq;
}

int main(){
	int n;
	vector <float> V;
	cout << "N = ";
	cin >> n;
	nhap(n,V);
	float kq = tim_min(V);
	cout << "Gia tri nho nhat trong A: " << kq;
	return 0;
}