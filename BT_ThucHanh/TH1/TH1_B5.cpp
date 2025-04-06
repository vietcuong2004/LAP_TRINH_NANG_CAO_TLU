#include<iostream>
using namespace std;
int main(){
	long int money;
	int count,a,b,c,d;
	cout << "Nhap so tien can rut: ";cin >> money;
	count=0;
	if ( money > 5000000)
		cout << "\nVui long nhap so tien nho hon 5 trieu dong.";
	else
	{
	//So to 500k can dua:
		a=money/500000;
		cout << ">> So to 500k can dua la: " << a;
		money=money-(a*500000);
	//So to 200k can dua:
		b=money/200000;
		cout << "\n>> So to 200k can dua la: " << b;
		money=money-(b*200000);
	//So to 100k can dua:
		c=money/100000;
		cout << "\n>> So to 100k can dua la: " << c;
		money=money-(c*100000);
	//So to 50k can dua:
    	d=money/50000;
    	cout << "\n>> So to 50k can dua la: " << d;
    //Tong so to can dua:
    	count=a+b+c+d;
    	cout << "\n>> Tong so to tien it nhat can dua la: " << count;
	}
	return 0;
}
