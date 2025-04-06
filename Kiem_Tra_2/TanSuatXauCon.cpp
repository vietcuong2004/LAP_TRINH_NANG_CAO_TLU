#include<bits/stdc++.h>
using namespace std;

int TimXauCon(string s, string sub){
	int pos,i = 0,count = 0; 
	while(pos<s.length()){
		pos = s.find(sub,i);
		if (pos<0)
			return -1;
		else{
			count ++;
			i = pos + sub.length();
		}
	}
	return count;
}

int main(){
	string s,sub;
	cout << "Nhap xau goc: ";
	getline(cin,s);
	cout << "Nhap xau con: ";
	getline(cin,sub);
	int i = TimXauCon(s,sub);
	cout << i;
	if(TimXauCon(s,sub)<0){
		cout << "Xau con khong xuat hien trong S!";
	}
	else{
		cout << "Xau con xuat hien " << TimXauCon(s,sub) << " lan trong S!";
	}
	return 0;
}
