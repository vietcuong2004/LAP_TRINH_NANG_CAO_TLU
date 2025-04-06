#include<bits/stdc++.h>
using namespace std;

void nhap(int A[100][100], int n){
	for (int i=0;i<n;i++){
		for (int j=0; j<n; j++){
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		}
	}
}

int tim_max(int A[100][100], int n){
	int max_mt = -9999;
	for (int i=0;i<n;i++){
		for (int j=0; j<n; j++){
			max_mt = max(max_mt,A[i][j]);
		}
	}
	return max_mt;
}

int tim_min(int A[100][100], int n){
	int min_mt = 9999;
	for (int i=0;i<n;i++){
		for (int j=0; j<n; j++){
			min_mt = min(min_mt,A[i][j]);
		}
	}
	return min_mt;
}

int chia_3(int A[100][100], int n){
	int count = 0;
	for (int i=0;i<n;i++){
		for (int j=0; j<n; j++){
			if (A[i][j]%3 == 0)
			count ++;
		}
	}
	return count;
}

int main(){
	int A[100][100],n;
	do{
		cout << "Nhap n = ";
		cin >> n;
	}
	while (n<=0 || n>=10);
	nhap(A,n);
	cout << "Min = " << tim_min(A,n) << endl;
	cout << "Max = " << tim_max(A,n) << endl;
	cout << "So chia het cho 3: " << chia_3(A,n);
	return 0;
}
