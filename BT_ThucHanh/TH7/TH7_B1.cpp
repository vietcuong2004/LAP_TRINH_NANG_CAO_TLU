#include<bits/stdc++.h>
using namespace std;

// Cau truc sinh vien:
struct SV{
	string MSV;
	string HoTen;
	string Lop;
};

// Nhap thong tin danh sach sinh vien:
void Nhap(vector<SV> &DSSV, int n){
	for (int i=0; i<n; i++){
		SV x;
		cout << ">> Sinh vien thu " << i+1 << ":\n";
		cout << "Ma SV: "; getline(cin,x.MSV);
		cout << "Ho ten: "; getline(cin,x.HoTen);
		cout << "Lop: "; getline(cin,x.Lop);
		DSSV.push_back(x);
	}
}

// Hien thi dssv:
void Xuat(vector<SV> x){
	for (int i=0; i<x.size();i++){
		cout << x[i].MSV << "\t" << x[i].HoTen << "\t" << x[i].Lop << "\n";
	}
}

// In ra cac sinh vien thuoc lop TTNT:
void TTNT(vector<SV> x){
		for (int i=0; i<x.size();i++){
			if (x[i].Lop == "TTNT")
				cout << x[i].MSV << "\t" << x[i].HoTen << "\n";
		}
}

// Sap xep sinh vien theo ho ten tang dan:
void SapXep(vector<SV> &x){
	for(int i=0; i<x.size()-1;i++){
		for (int j=i+1; j<x.size();j++){
			if (x[i].HoTen.compare(x[j].HoTen) > 0){
				swap(x[i],x[j]);
			}
		}
	}
}

int main(){
	int n;
	vector<SV> A;
	// Nhap DSSV:
	cout << ">> Nhap so sinh vien: ";
	cin >> n;
	cin.ignore();
	Nhap(A,n);
	
	// In DSSV vua nhap ra man hinh:
	cout << ">> DSSV:\n";
	Xuat(A);
	
	// Sinh vien thuoc lop TTNT:
	cout << ">> Thong tin cac SV lop TTNT:\n";
	TTNT(A);
	
	// Sap xep theo thu tu ho ten tang dan:
	SapXep(A);
	cout << ">> DSSV sau khi sap xep:\n";
	Xuat(A);
	return 0;
}
