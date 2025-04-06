#include<bits/stdc++.h>
using namespace std;
typedef float T;

void nhap(int n,vector<T> &V){
	T x;
	for (int i=0; i<n;i++){
		cout << "B[" << i << "] = ";
		cin >> x;
		V.push_back(x);
	}
}

void xuat(vector<T> V){
	for (int i=0; i<V.size();i++){
		cout << " " << V[i];
	}
}

T tim_max(vector<T> V){
	T kq = V[0];
	for (int i=1; i<V.size();i++){
		kq = max(kq,V[i]);
	}
	return kq;
}

int so_phan_tu_x(T x,vector<T> V){
	int count = 0;
	for (int i=0; i<V.size();i++){
		if (x <= V[i]){
			count ++;
		}
	}
	return count;
}

void xoa_k(int k, vector<T> &V){
	cout << "Phan tu tai vi tri " << k << ": " << V[k] << endl;
	// Xóa phần tử tại vị trí k:
	V.erase(V.begin() + k);
}

int main(){
	int n;
	vector<T> B;

	// Câu a:
	cout << "a) Nhap N = ";
	cin >> n;
	cout << "Nhap cac phan tu:\n";
	nhap(n,B);
	cout << "B  = ";
	xuat(B);
	// Câu b:
	cout << "\nb) Phan tu lon nhat cua day: " << tim_max(B);

	// Câu c:
	T x;
	cout << "\nc) x = "; cin >> x;
	cout << "So phan tu lon hon hoac bang x: " << so_phan_tu_x(x,B);

	// Câu d:
	int k;
	cout <<"\nd) Xoa phan tu tai vi tri k:" << endl;
	do {
		cout << "k = "; 
		cin >> k;
	}
	while(k<1 || k>n);
	
	xoa_k(k,B);
	cout << "Mang sau khi xoa phan tu tai vi tri k:";
	xuat(B);
	return 0;
}