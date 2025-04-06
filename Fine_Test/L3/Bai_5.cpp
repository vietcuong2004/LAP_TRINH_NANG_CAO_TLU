#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "N = "; cin >> n;
	long int so_tien;
	long int bac1 = 1484, bac2 = 1533, bac3 = 1786 , bac4 = 2242, bac5 = 2503, bac6 = 2587;
	if (n<=50){
		so_tien = n*bac1;
	} 
	else if (n>50 && n<=100){
		so_tien = 50*bac1 + (n-50)*bac2;
	}
	else if (n>100 && n<=200){
		so_tien = 50*bac1 + 50*bac2 +(n-100)*bac3;
	}
	else if (n>200 && n<=300){
		so_tien = 50*bac1 + 50*bac2 +100*bac3 +(n-200)*bac4;
	}
	else if (n>300 && n<=400){
		so_tien = 50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + (n-300)*bac5;
	}
	else{
		so_tien = 50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + 100*bac5 + (n-400)*bac6;
	}
	cout << "So tien phai nop: " << so_tien;
	return 0;
}
