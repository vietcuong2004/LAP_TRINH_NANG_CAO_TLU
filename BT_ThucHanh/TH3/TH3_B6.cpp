#include <bits/stdc++.h>
using namespace std;
typedef int T;

void uoc_so(T n,T &tong, double &tbc ){
	T count = 0,i;
	for (i=1;i<=n;i++){
		if(n%i==0){
			cout << " " << i;
			count++;
			tong += i;
		}
	}
	tbc=tong*1.0/count;
} 

int main(){
	T n;
	cout << "N = ";cin >>n;
	while(n<=0){
		cout << "\nNhap so N duong!\n";
		cout << "N = ";cin >>n;
	}
	T tong=0;
	double tbc=0;
	cout << "\n>> Cac uoc so cua N:";
	uoc_so(n,tong,tbc);
	cout << "\n>> Tong cac uoc: " << tong;
	cout << "\n>> Trung binh cong cac uoc: " << tbc;
	return 0;
}
