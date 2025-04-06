#include<bits/stdc++.h>
using namespace std;
typedef int T;

void nhap(T A[4][4]){
	for (int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout << "A[" <<i<<"][" <<j<<"] = ";
			cin >> A[i][j];
		}
	}
}

void xuat(T A[4][4]){
	for (int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout << "\t" << A[i][j];
		}
		cout << endl;
	}
}

void cau_a(T A[4][4]){
	for(int j=0;j<4;j++){
		if(A[3][j] > 5)
			cout << " " << A[3][j];
	}
}

void cau_b(T A[4][4], T &so_am, T &so_duong){
	so_am = 0, so_duong = 0;
	for (int i=0;i<4;i++){
			if(A[i][2] > 0)
				so_duong++;
			else if(A[i][2] < 0) 
				so_am++;
		}	
}

T cau_c(T A[4][4]){
	T tong = 0;
	for (int i = 0; i<4; i++){
		tong += A[i][i];
	}
	return tong;
}

void cau_d(T A[4][4], T &tong, float &TBC){
	tong = 0;
	for (int j=0;j<4;j++){
		tong += A[0][j];
	}
	TBC = tong/4.0;
}

int main(){
	T A[4][4];
	cout << ">> Nhap ma tran:\n";
	nhap(A);
	cout <<"\n\n>> Ma tran vua nhap:\n";
	xuat(A);

	//Câu a:
	cout << "\na) Cac phan tu lon hon 5 tren dong 3:";
	cau_a(A);

	//Câu b:
	T so_am = 0, so_duong = 0;
	cau_b(A,so_am,so_duong);
	cout << "\nb) So phan tu am la: " << so_am;
	cout << "\n   So phan tu duong la: " << so_duong;

	//Câu c:
	cout <<"\nc) Tong cac phan tu tren duong cheo chinh: " << cau_c(A);

	//Câu d:
	T tong=0;
	float TBC;
	cau_d(A,tong,TBC); 
	cout <<"\nd) Tong cac phan tu hang dau tien: " << tong;
	cout <<"\n   TBC cac phan tu hang dau tien : " << TBC;
	return 0;
}