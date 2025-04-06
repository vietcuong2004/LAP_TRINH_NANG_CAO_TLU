#include <bits/stdc++.h>
using namespace std;
void nhap(int n,float A[]){
	for(int i = 0; i<n;i++){
		cout << "A[" << i << "] = ";
		cin >> A[i];	
	}
		
}

void xuat(int n, float A[]){
	for (int i = 0; i<n;i+=2){
		cout << " " << A[i];
	}	
}

int main(){
	int n;
	float A[1000];
	cout << "N = ";
	cin >> n;
	nhap(n,A);
	cout << "Cac phan tu o vi tri chan:";
	xuat(n,A);
	return 0;
}
