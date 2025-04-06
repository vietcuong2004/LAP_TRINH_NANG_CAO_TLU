#include <iostream>
using namespace std;
int main(){
	int n,s=0,count=0;
	do{
		cout << "N = ";
		cin >> n;
		if(n>0){
			s+=n;
			count++;
		}
	}
	while (n!=0);
	if(count==0) cout << ">>Khong co so duong nao!";
	else{
		cout << ">> Tong cac so duong vua nhap = "<<s;
		cout << "\n>> TBC cac so duong vua nhap = "<<(s*1.0/count);
	}
	return 0;
}
