#include<bits/stdc++.h>
using namespace std;
struct Sach{
	string TenSach;
	string NXB;
	double Gia;
};

void nhap(Sach *book,int n){
	for (int i = 0; i<n;i++){
		cin.ignore();
		cout << "# Nhap thong tin cuon sach " << i+1 << ":\n";
		cout << ">> Ten sach: ";
		getline(cin,book[i].TenSach);
		cout << ">> Nha xuat ban: ";
		getline(cin,book[i].NXB);
		cout << ">> Gia ban: ";
		cin >> book[i].Gia;
	}
}
void xuat(Sach *book,int n){
	for (int i=0; i<n; i++){
		cout << "# Thong tin cuon sach " << i+1 << ":\n";
		cout << ">> Ten sach: " << book[i].TenSach << endl;
		cout << ">> Nha xuat ban: " << book[i].NXB << endl;
		cout << ">> Gia ban: " << book[i].Gia << endl;
	}
}

int NXB_Giao_Duc(Sach *book,int n){
		int count = 0;
		for (int i=0; i<n; i++){
			if(book[i].NXB == "GIAO DUC")
				count ++;
		}
		return count;
}

void gia_sach_max(Sach *book, int n){
	double gia_max = -9999;
	int kq;
	for (int i=0;i<n;i++){
		if(book[i].Gia > gia_max){
			gia_max = book[i].Gia;
			kq = i;
		}
	}
	cout << "\n# Thong tin quyen sach dat nhat:";
	cout << "\n>> Ten: " << book[kq].TenSach;
	cout << "\n>> NXB: " << book[kq].NXB;
	cout << "\n>> Gia ban: " << book[kq].Gia;
	
}

int main(){
	int n;
	cout << ">> So quyen sach N = ";
	cin >> n;
	Sach *A =  new Sach[n];
	nhap(A,n);
	
	cout << "\n# Thong tin cac cuon sach vua nhap:\n";
	xuat(A,n);
	
	cout << "\n# So cuon sach cua NXB \"GIAO DUC\": " << NXB_Giao_Duc(A,n);
	
	gia_sach_max(A,n);
	delete[] A;
	A = NULL;
	return 0;
}
