#include<iostream>
using namespace std;

// Ham kiem tra nam nhuan:
int nam_nhuan(int y){
	if((y%400 == 0) || ((y%4 == 0) && (y%100 != 0)))
		return 1;
	else
		return 0;
}

// So ngay trong thang:
int so_ngay(int ngay,int thang, int nam){
	switch(thang){
		//Thang 4,6,9 co 30 ngay:
		case 4:
		case 6:
		case 9:
		case 11: ngay = 30;break;
		//Thang 1,3,5,7,10,12 co 31 ngay:
		case 1:
		case 3:
		case 5:
		case 7:
		case 10:
		case 12: ngay = 31;break;
		//Thang 2:
		case 2:{
			if (nam_nhuan(nam) == 1) ngay = 29;
			else ngay = 28;
			break;
		}
	}
	return ngay;		
}

//Kiem tra ngay thang nam nhap vao co hop le khong:
int kiem_tra(int d,int m,int y){
	if (d>0 and d<=31 and m>0 and m<=12 and y>0){
		if (d > so_ngay(d,m,y))
			return 0;
		else 
			return 1;
	}
	else
		return 0;
}

//Tim ngay tiep theo:
void ngay_tiep_theo(int d,int m, int y){
	d += 1;
	if (d>so_ngay(d,m,y)){
		d = 1;
		m += 1;
		if (m>12){
			m = 1;
			y += 1;
		}
	}
	cout << "\n=> Ngay tiep theo la: " <<d<< "/" <<m<< "/" <<y;
}
int main(){
	//Nhap ngay thang nam cho den khi hop le:
	int d,m,y;
	cout << ">> Nhap vao ngay: "; cin >> d;
	cout << ">> Nhap vao thang: "; cin >> m;
	cout << ">> Nhap vao nam: "; cin >> y;
	while (kiem_tra(d,m,y) == 0){
		cout << "\n=> Ngay, thang, nam khong hop le!\n";
		cout << ">> Nhap vao ngay: "; cin >> d;
		cout << ">> Nhap vao thang: "; cin >> m;
		cout << ">> Nhap vao nam: "; cin >> y;
		kiem_tra(d,m,y);
	}
	
	// In ra ngay, thang, nam hien tai:
	cout << "\n=> Ngay hom nay: " <<d<< "/" <<m<< "/" <<y;
	
	// In ra ngay hom sau:
	ngay_tiep_theo(d,m,y);
	return 0;
}
