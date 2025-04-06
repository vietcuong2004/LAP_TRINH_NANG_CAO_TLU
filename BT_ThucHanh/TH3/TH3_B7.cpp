#include <bits/stdc++.h>
using namespace std;
typedef long int T;

int so_chinh_phuong(T n){
	int j = sqrt(n);
	if (j*j == n){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	T n,count = 0,s=0;
	double tbc;
	cout << "N = ";cin >> n;
	cout << "Cac so chinh phuong trong khoang [N;3N]:";
	for (int i=n; i<=3*n;i++){
		if(so_chinh_phuong(i) == 1){
			cout <<"	" << i;
			count++;
			s += i;
		}
	}
	cout << "\nTong cac so chinh phuong: " << s;
	cout << "\nTBC cac so chinh phuong: " << s*1.0/count;
	return 0;
}
