#include <bits/stdc++.h>
using namespace std;

void nhap(int n, int A[]){
		for (int i=0; i<n;i++){
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
}

void xuat(int n, int A[]){
	cout << "\nMang vua nhap:";
	for (int i=0;i<n;i++)
		cout << " " << A[i];
}

// Cau a:
void cau_a(int n , int A[]){
	for (int i=0;i<n;i++){
		if (A[i]%2 == 0){
			cout << " " << A[i];
		}
	}
}

// cau b:
void cau_b(int n , int A[]){
	for (int i=0;i<n;i++){
		if (A[i] > 10){
			cout << " " << A[i];
		}
	}
}

//cau c:
void cau_c(int n , int A[]){
	for (int i=0;i<n;i++){
		if (A[i] == A[i-1]+2){
			cout << " " << A[i];
		}
	}
}

//cau d:
void cau_d(int n,int A[]){
	for (int i=0;i<n;i++){
		if (A[i] == A[i-1]+A[i+1]){
			cout << " " << A[i] << " " << A[i-1] << " " << A[i+1] <<endl;
		}
	}	
}

int main(){
	int n;
	int A[20];
	cout << "N = "; cin >> n;
	nhap(n,A);
	xuat(n,A);
	
	//cau a:
	cout << "\n\na) Cac so chan trong mang:";
	cau_a(n,A);
	
	//cau b:
	cout << "\n\nb) Cac so lon hon 10 trong mang:";
	cau_b(n,A);
	
	//cau c:
	cout <<"\n\nc) Cac so bang so truoc no +2: ";
	cau_c(n,A);
	
	//cau d:
	cout <<"\n\nd) Cac bo 3 (A[i], A[i-1], A[i+1]) thoa man A[i] = A[i-1] +A[i+1] \n";
	cau_d(n,A);
	return 0;
}
