#include <iostream>
#include <cctype>
using namespace std;
int main(){
	char c;
	cout << "Nhap vao diem: ";cin >> c;
	c = toupper(c);
	switch (c){
		case 'A': cout << ">> Hoc luc GIOI"; break;
		case 'B': cout << ">> Hoc luc KHA"; break;
		case 'C': cout << ">> Hoc luc TRUNG BINH";break;
		case 'D': cout << ">> Hoc luc TRUNG BINH YEU";break;
		case 'F': cout << ">> Hoc luc YEU";break;
		default: 
			cout << "ERROR!";
	}
	return 0;
}
