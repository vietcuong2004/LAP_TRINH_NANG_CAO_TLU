#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string Ten,Nganh,CNTT;
	ofstream f1("Danhsach.txt");
	ifstream f2("DSCNTT.txt");
	cout << "Nhap so sinh vien: ";
	cin >> n;
	cin.ignore();
	for(int i=0;i<n;i++){
		cout << ">>Sinh vien thu " << i+1 << ":\n";
		cout << "+ Ho ten: ";
		getline(cin,Ten);
		cout << "+ Nganh: ";
		getline(cin,Nganh);
		f1 << Ten << "\t" << Nganh << "\n";
	}
	
	
	// Doc file "Danhsach.txt" va ghi nhung sinh vien thuoc nganh cntt 
	// vao file "DSCNTT":
	ifstream f3 ("DSCNTT.txt");
	while(!f3.eof()){
		getline(f3,CNTT);
		if(CNTT.find("CNTT") >= 0)
			f2 << CNTT << "\n";
	}
	f1.close();
	f3.close();
	return 0;	
}
