#include <iostream>
using namespace std;
int main(){
	double diem;
	cout << "Nhap diem: ";cin >> diem;
	if(diem>=8.5)
		cout << "Diem A";
	else if (diem<8.5 && diem>=7)
		cout << "Diem B";
	else if (diem<7 && diem >=5.5)
		cout << "Diem C";
	else if (diem<5.5 && diem >= 4.5)
		cout << "Diem D";
	else 
		cout << "Diem F";
	return 0;
}
