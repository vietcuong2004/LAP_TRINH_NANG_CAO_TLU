#include <bits/stdc++.h>
using namespace std;

//cau a:
void nhap(int n, int A[]){
		for (int i=0; i<n;i++){
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
}

//cau b
void xuat(int n, int A[]){
	for (int i=0;i<n;i++)
		cout << " " << A[i];
}

//cau c
int cau_c(int n, int A[]){
	int tong = 0;
	for (int i=1;i<n;i+=2){
		tong += A[i];
	}
	return tong;
}

//cau d:
void cau_d(int n,int a[]){
	for(int i=0;i<n-1;i++)
		for(int j=i+1; j<n; j++)  
			if(a[j] > a[i]){ 
				int tg=a[i];
            	a[i]=a[j];
       			a[j]=tg;
        	}
}

// cau e:
bool tim_x(int n, int A[], int x){
	for (int i=0;i<n;i++)
		if (x==A[i])
			return true;
	return false;
}

void xoa_x(int &n, int *A, int x){
	int pos = -1;
	for (int i=0;i<n;i++){
		if (x == A[i]){
			pos = i; 
			break;
		}		
	}
	// Dich chuyen mang ve ben trai tu vi tri xoa
    for(int i = pos; i < n - 1; i++){
        A[i] = A[i+1];
    }
    //sau khi xoa giam so luong phan tu mang
    n--;

}

//cau f:
void them_x(int &n, int *A, int x,int k){
	for (int i = n;i>=k;i--){
		A[i] = A[i-1];
	}
	A[k] = x;
	n++;
}

int main(){
	int n;
	int A[20];
	
	//cau a:
	cout << "a) N = "; cin >> n;
	nhap(n,A);
	
	//cau b:
	cout << "\n\nb) Mang vua nhap:";xuat(n,A);
	
	//cau c:
	cout <<"\n\nc) Tong cac phan tu o chi so le: " << cau_c(n,A);
	
	// cau d:
	cau_d(n,A);
	cout << "\n\nd) Mang sap xep giam dan:"; xuat(n,A);
	
	// cau e:
	int x;
	cout <<"\n\ne) Nhap phan tu can tim x = "; cin >> x;
	if (!tim_x(n,A,x))
		cout << "Khong tim thay x trong mang";
	else{
		cout << "Tim thay x trong mang, xoa phan tu x.";
		// Xoa tat ca cac gia tri x co trong mang: 
		for (int i= 0;i<n;i++)
			if (x==A[i]){
				xoa_x(n,&A[0],x);
				i--;
			}
		cout << "\nMang sau khi xoa: ";
		xuat(n,A);
	}
	
	//cau f:
	int k;
	cout <<"\n\nf) Nhap phan tu can chen: ";
	cin >> x;
	cout << "Nhap vi tri can chen: k = ";
	cin >> k;
	them_x(n,&A[0],x,k);
	cout << "Mang sau khi them: ";
	xuat(n,A);
	return 0;
}
