#include<bits/stdc++.h>
using namespace std;
typedef float T;

/*void nhap_m_n(int &n, int &m){
	cout << ">> Nhap so hang (N) va cot (M) thuoc [3;15]:" << endl;
	do{
		cout << "N = "; cin >> n;
		cout << "M = "; cin >> m;
	}
	while(n<3 || n>15 || m<3 || m>15);
	
}
*/
void nhap_mang(T A[][100],int n, int m){
	for(int i=0; i<n;i++){
		for(int j=0; j<m;j++){
			cout << "+ A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		}
	}
}

void xuat_mang(T A[][100],int n, int m){
	for(int i=0; i<n;i++){
		for(int j=0; j<m;j++){
			cout << "\t" << A[i][j];
		}
		cout << endl;
	}
}

T cau_b(T A[100][100], int n, int m){
	T kq = 9999;
	for (int j = 0; j < m; j++){
		kq = min(kq,A[2][j]);
	}
	return kq;
}

int cau_c(T x, T A[100][100],int n, int m){
	for (int i=0; i<n;i++)
		if (A[i][1] == x)
			return i;
	return 0;
}

void cau_d(T A[100][100],int n, int m){
	int end = m-1;
	for (int i=0;i<n-1;i++){
		for (int k=i+1;k<n;k++){
			if (A[i][end] > A[k][end]){
				T tmp = A[i][end];
				A[i][end] = A[k][end];
				A[k][end] = tmp;
			}
		}
	}
}

void cau_e(T A[100][100],int n, int m){
	int end = n-1;
	for (int j=0; j<m; j++){
		int tmp = A[0][j];
		A[0][j] = A[end][j];
		A[end][j] = tmp;
	}
}

bool so_nguyen_to(T n){
	// Nếu là số thực thì trả về false:
	if (n - int(n) != 0)
		return false;
	else{
		int end = int(sqrt(n));
		for (int j=2; j<=end;j++){
			if (int(n)%j == 0)
				return false;
		}
	}
	return true;
}

int main(){
	int n,m;
	//nhap_m_n(n,m);
	cout << ">> Nhap so hang (N) va cot (M) thuoc [3;15]:" << endl;
	do{
		cout << "N = "; cin >> n;
		cout << "M = "; cin >> m;
	}
	while(n<3 || n>15 || m<3 || m>15);

	//Câu a:
	T A[100][100];
	cout << "\na) Nhap mang A[" << n << "][" << m << "]:" << endl;
	nhap_mang(A,n,m);
	cout << ">> Ma tran vua nhap:" << endl;
	xuat_mang(A,n,m);

	// Câu b:
	cout << "\nb) Phan tu min tren dong i=2: " << cau_b(A,n,m);

	// Câu c:
	T x;
	cout << "\nc) Nhap phan tu can tim: x = ";
	cin >> x;
	if(cau_c(x,A,n,m) == 0)
		cout << ">> x khong xuat hien trong cot 1 cua ma tran.";
	else
		cout << ">> x xuat hien o hang " << cau_c(x,A,n,m) << " cot 1";
	//Câu d:
	cau_d(A,n,m);
	cout << "\nd) Ma tran sau khi sap xep tang dan cot cuoi cung:" << endl;
	xuat_mang(A,n,m);

	// Câu e:
	cout << "\ne) Doi cho cac phan tu hang dau va hang cuoi:" << endl;
	cau_e(A,n,m);
	xuat_mang(A,n,m);

	// Câu f:
	cout << "\nf) Cac so nguyen to trong ma tran:";
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			if (so_nguyen_to(A[i][j]))
				cout << " " << A[i][j];

	return 0;
}