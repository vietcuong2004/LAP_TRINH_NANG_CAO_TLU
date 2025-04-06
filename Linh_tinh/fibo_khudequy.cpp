#include <iostream>
using namespace std;

/*int Fibo(int n){
	if (n==0) return 0;
	else if(n == 1) return 1;
	else{
		int A[50];
		A[0] = 0, A[1] = 1;
		int i;
		for(i = 2; i <= n; i++){
			A[i] = A[i-1]+A[i-2];  
		}
		return A[n];
	}
}*/
/*int Fibo (int n){
if(n==0) return 0;
else if(n == 1) return 1;
else 
return Fibo(n-1)+ Fibo(n-2);
}*/
int Fibo(int n){
if(n==0) return 0;
else if(n == 1) return 1;
else
{
int f1 = 0, f2 = 1, f3;
for(int k = 2; k <= n; k++)
{
f3 = f1+f2;
f1 = f2;
f2 = f3;  
}
return f3;
}
}
int main(){
	int n;
	cout << "N = ";
	cin >>n;
	cout << "Fibo(n) = "<<Fibo(n);
	return 0;
}