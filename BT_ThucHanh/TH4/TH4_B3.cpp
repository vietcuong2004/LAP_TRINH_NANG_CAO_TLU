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

bool kiem_tra_tang_dan(vector<T> V){
	for (int i=1;i<V.size();i++){
		if (V[i] < V[i-1]){
			return false;
		}
	}
	return true;
}

void xoa_k(int k, vector<T> &V){
	// Xóa phần tử tại vị trí k:
	V.erase(V.begin() + k);
}

void xoa_phan_tu_nho_hon_x(T x,vector<T> &V ){
	for (int i=0;i<V.size();i++){
		if (V[i] < x){
			xoa_k(i,V);
			i--;
		}
	}
}

int main(){
	int n;
	vector<T> B;

	// Câu a:
	cout << "Nhap n trong khoang (0,30]:" << endl;
	do{
		cout << "N = ";
		cin >> n;
	}
	while (n<=0 || n>30);
	cout << "Nhap cac phan tu:\n";
	nhap(n,B);
	cout << "B =";
	xuat(B);

	// Câu b:
	cout << "\nb) Day tang dan? ";
	if(kiem_tra_tang_dan(B))
		cout << "True";
	else cout <<"False";

	// Câu c:
	T x;
	cout <<"\nc) Nhap phan tu x: ";
	cin >> x;
	xoa_phan_tu_nho_hon_x(x,B);
	cout << "Mang B sau khi xoa cac phan tu nho hon x:";
	xuat(B);

	return 0;
}