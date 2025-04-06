#include<bits/stdc++.h>
using namespace std;

struct SV{
	string HoTen;
	int Ngay, Thang, Nam;
};

void Nhap(SV* &x,int n){
	x = new SV[n]; // Xin cap phat dong n phan tu cho mang SV[]
	for (int i=0; i<n;i++){
		cout << ">> Sinh vien thu " << i+1 << ":\n";
		cout << "Ho ten: "; getline(cin,x[i].HoTen);
		cout << "Ngay sinh: "; cin >> x[i].Ngay;
		cout << "Thang sinh: "; cin >> x[i].Thang;
		cout << "Nam sinh: "; cin >> x[i].Nam;
		cin.ignore();
	}
}

void Xuat(SV* x,int n){
	cout << "\n>> DSSV:\n";
	for (int i=0; i<n; i++){
		cout << x[i].HoTen << "\t" << x[i].Ngay << "/" << x[i].Thang << "/" << x[i].Nam << "\n";
	}
}

void nam_sinh_k(SV*x, int n, int k){
	cout << "\n>> DSSV sinh nam " << k << ":\n";
	for (int i=0; i<n; i++){
		if(x[i].Nam == k)
			cout << x[i].HoTen << "\t" << x[i].Ngay << "/" << x[i].Thang << "/" << x[i].Nam << "\n";
	}
}

// Tim cac sinh vien co ngay sinh 29/2:
void TimSV(SV*x , int n){
	// vector luu tru cac sinh vien co ngay sinh 29/2:
	vector<SV> A;
	// Them cac sinh vien co ngay sinh 29/2 vao vector A:
	for(int i=0; i<n;i++){
		if (x[i].Ngay == 29 && x[i].Thang == 2){
			A.push_back(x[i]);
		}
	}
	// In ra thong bao:
	if(A.size() == 0)
		cout << "\n>> Khong co sinh vien nao sinh ngay 29/2!";
	else{
		cout << "\n>> Cac SV sinh ngay 29/2:\n";
		for(int i=0; i<A.size(); i++)
			cout << x[i].HoTen << "\t" << x[i].Ngay << "/" << x[i].Thang << "/" << x[i].Nam << "\n";
	}
}

int main(){
	int n;
	cout << ">> Nhap so luong sinh vien: "; 
	cin >> n;
	cin.ignore();
	
	// Nhap thong tin cac sinh vien:
	SV* DSSV = NULL;
	Nhap(DSSV,n);
	
	// In danh sach sinh vien:
	Xuat(DSSV,n);
	
	// In ra cac sinh vien co nam sinh k:
	int k;
	cout << "\n>> Nhap k = ";
	cin >> k;
	cin.ignore();
	nam_sinh_k(DSSV,n,k);
	
	// Tim sinh vien co ngay sinh 29/2:
	TimSV(DSSV,n);	
	return 0;
}
