#include<bits/stdc++.h>
using namespace std;

vector <int> TanSuat(string str1, string str2){
	vector<int> pos;
	int i=0, pos1=0;
	while(i<str1.length()){
		pos1 = str1.find(str2,pos1+i);
		if (pos1<0)
			return pos;
		else{
			pos.push_back(pos1);
			i = str2.length();
		}
	}
	return pos;
}

int main(){
	string s1,s2;
	cout << "Nhap xau str1: "; getline(cin,s1);
	cout << "Nhap xau str2: "; getline(cin,s2);
	vector<int> kq = TanSuat(s1,s2);
	if(kq.size() == 0)
		cout << "s2 khong xuat hien trong s1!";
	else{
		cout << "s2 xuat hien " << kq.size() << " lan trong s1!\n";
		cout << "vi tri xuat hien:";
		for(int i=0; i<kq.size();i++)
			cout << " " << kq[i];
	}
	return 0;
}
