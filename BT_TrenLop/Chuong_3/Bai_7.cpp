//#include<iostream>
//#include<vector>
//#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void nhap(vector<int> &vectorA){
	int N;
	cout << "Nhap so phan tu n = ";
	cin >> N;
	int i=0,x;
	do{
		cout << "Nhap so nguyen: ";
		cin >> x;
		vectorA.push_back(x);
		i++;
	}
	while(i<N);
}

vector<int> vectorB(vector<int> &vectorA){
	vector<int> vectorB;
	for (int i=0; i<vectorA.size(); i++)
		if (vectorA[i] % 2 == 0)
			vectorB.push_back(vectorA[i]);
	return vectorB;
}

vector<int> vectorC (vector<int> A){
	reverse(A.begin(),A.end());
	return A;
}

void xuat(vector<int> V){
	for (int i=0; i<V.size(); i++){
		cout << " " << V[i];
	}
}

int main(){
	vector <int> A;
	nhap(A);
	cout << ">> Vector A:";
	xuat(A);

	cout << "\n>> Vector B:";
	vector <int> B = vectorB(A);
	xuat(B);

	cout << "\n>> Vector C:";
	vector <int> C = vectorC(A);
	xuat(C);

	return 0;
}
