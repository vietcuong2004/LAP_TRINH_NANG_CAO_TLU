#include <bits/stdc++.h>
using namespace std;
int so_chinh_phuong(int n){
	int j = sqrt(n);
	if (j*j == n)
		return 1;
	else return 0;
}

int main(){
	int n;
	cout << "N = ";cin >>n;
	while(n<=0){
		cout << "\nNhap so N duong!\n";
		cout << "N = ";cin >>n;
	}
	cout << "Cac so chinh phuong nho hon N:";
	for (int i=1;i<=n;i++){
		if (so_chinh_phuong(i) == 1){
			cout << " " << i;
		}
	}
	return 0;
}
