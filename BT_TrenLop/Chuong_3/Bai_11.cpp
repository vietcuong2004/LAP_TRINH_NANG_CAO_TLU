#include<iostream>
#include<vector>
using namespace std;
void nhap(vector<int> &V,int N){
	int i=0,x;
	do{
		cout << "Nhap so nguyen: ";
		cin >> x;
		V.push_back(x);
		i++;
	}
	while(i<N);
}

void them(vector <int> &V,int x, int k, int n){
	if (k>n){
		V.push_back(x);
	}
	else{
		V.insert(V.begin() + k - 1,x);
	}
}

void xuat(vector<int> V){
	for (int i=0; i<V.size(); i++){
		cout << " " << V[i];
	}
}

int main(){
	int N;
	cout << "Nhap so phan tu n = ";
	cin >> N;
	vector <int> V;
	nhap(V,N);
	cout << ">> Vector:";
	xuat(V);

	int k,x;
	cout << "\n>> Chen vao vi tri thu k = "; cin >> k;
	cout << ">> Nhap phan tu can chen x = "; cin >> x;
	them(V,x,k,N);
	cout << ">> Vector sau khi chen:";
	xuat(V);
	return 0;
}
