#include<iostream>
#include<string>
using namespace std;

string Chuan_Hoa(string w){
	// Xóa dấu cách ở đầu:
	for(int i=0; i<w.length();i++){
		if(isspace(w[i])){
			w.erase(i,1);
			i--;
		}
		else break;
	}

	// Xóa dấu cách ở cuối:
	for(int i=w.length()-1;i>=0;i--){
		if(isspace(w[i])){
			w.erase(i,1);
		}
		else break;
	}

	// Xóa dấu cách ở giữa:
	for(int i=0; i<w.length(); i++){
		if(isspace(w[i]) && isspace(w[i+1])){
			w.erase(i,1);
			i--;
		}
	}
	return w;
}

int main(){
	string w;
	cout << "Nhap W = ";
	getline(cin,w);
	cout << "Chuan hoa = " << Chuan_Hoa(w);
	return 0;
}