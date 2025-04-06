#include<bits/stdc++.h>
using namespace std;

string Ket_Qua(string w, string s, int p, int q){
	 // Chen vao vi tri lon hon truoc 
	 // Cac phan tu truoc do khong bi cap nhat chi so
	 // => Khong anh huong den viec chen
	int pos1 = max(p,q);
	int pos2 = min(p,q);
	w.insert(pos1,s);
	w.insert(pos2,s);
	return w;
}

int main(){
	string W,S;
	cout << "Nhap W = "; getline(cin,W);
	cout << "Nhap S = ";getline(cin,S);
	int p,q;
	cout << "P = "; cin >> p;
	cout << "Q = "; cin >> q;
	if (p>W.length() || q>W.length()){
		return 0;
	}
	else{
		cout << "Ket qua: " << Ket_Qua(W,S,p,q);
	}
	return 0;
}
