#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, A[1000];
	cout << "N = ";
	cin >> n;
	int max = -9999;
	for(int i = 0; i<n;i++){
		cout << "a[" << i << "] = ";
		cin >> A[i];
		if (A[i] > max) 
			max = A[i];	
	}
	
	int count = 0;
	for (int i = 0; i<n;i++){
		if (A[i] == max) 
			count++;	
	}
	cout << "Gia tri lon nhat cua A: " << max;
	cout << "\nSo phan tu co gia tri lon nhat: " << count;
	return 0;
}
