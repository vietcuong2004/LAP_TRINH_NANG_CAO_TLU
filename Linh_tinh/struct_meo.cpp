#include <iostream>
#include <string>
using namespace std;

struct Meo {
    string TenM;
    double Gia;
    string Giong;
    int Tuoi;
};

void nhapMeo(Meo danhSachMeo[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ">> Nhap thong tin cho meo thu " << i + 1 << ":" << endl;
        cout << "Ten meo: ";
        cin.ignore();
        getline(cin, danhSachMeo[i].TenM);
        cout << "Gia ban: ";
        cin >> danhSachMeo[i].Gia;

        cout << "Giong meo: ";
        cin.ignore();
        getline(cin, danhSachMeo[i].Giong);

        cout << "Tuoi meo: ";
        cin >> danhSachMeo[i].Tuoi;

        cout << endl;
    }
}

void xuatMeo(Meo danhSachMeo[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ">> Thong tin meo thu " << i + 1 << ":" << endl;
        cout << "Ten meo: " << danhSachMeo[i].TenM << endl;
        cout << "Gia ban: " << danhSachMeo[i].Gia << endl;
        cout << "Giong meo: " << danhSachMeo[i].Giong << endl;
        cout << "Tuoi meo: " << danhSachMeo[i].Tuoi << endl;
        cout << endl;
    }
}

void themMeo(Meo danhSachMeo[], int& n, int k, Meo meoThem) {
    // Di chuyen cac meo tu vi tri k ve sau
    for (int i = n - 1; i >= k; i--) {
        danhSachMeo[i + 1] = danhSachMeo[i];
    }

    // Them meo moi vao vi tri k
    danhSachMeo[k] = meoThem;
    n++;
}

int main() {
    int n;
    cout << ">> Nhap so luong meo: ";
    cin >> n;

    Meo danhSachMeo[100];

    nhapMeo(danhSachMeo, n);

    cout << "\n>> Danh sach cac con meo vua nhap:\n";
    xuatMeo(danhSachMeo, n);

    int k;
    cout << ">> Nhap vi tri muon them meo: ";
    cin >> k;
    if (k < 0 || k > n) {
        cout << "Vi tri them khong hop le!" << endl;
    }
	else{
    	Meo meoThem;
    	cout << ">> Nhap thong tin cho meo can them:" << endl;
    	cout << "Ten meo: ";
    	cin.ignore();
    	getline(cin, meoThem.TenM);

    	cout << "Gia ban: ";
    	cin >> meoThem.Gia;

    	cout << "Giong meo: ";
    	cin.ignore();
    	getline(cin, meoThem.Giong);

    	cout << "Tuoi meo: ";
    	cin >> meoThem.Tuoi;
	
    	themMeo(danhSachMeo, n, k, meoThem);

    	cout << "\n>> Danh sach sau khi them meo:\n";
    	xuatMeo(danhSachMeo, n);
	}
    return 0;
}

