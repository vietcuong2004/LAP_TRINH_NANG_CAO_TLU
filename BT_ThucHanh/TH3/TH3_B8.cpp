#include <bits/stdc++.h>
using namespace std;
typedef long int T;

int so_nguyen_to(T n){
	for (int i=2;i<=int(sqrt(n));i++){
		if (n%i == 0){
			return 0;
		}
	}	
	return 1;
}

int main(){
	T n;
	cout << "N = ";
	cin >> n;
	
	if (so_nguyen_to(n) == 1){
		cout << "La so nguyen to";
	}
	if (so_nguyen_to(n) == 0){
		cout << "Khong la so nguyen to";
	}
	return 0;
}
