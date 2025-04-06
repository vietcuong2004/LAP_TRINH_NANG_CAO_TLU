#include<bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
	int n;
	string line;
	ifstream fi("input.txt");   // mo file de doc
	ofstream fo("output.txt");  // mo file de ghi
	fi >> n;                  // doc 1 so tu file
	getline(fi, line); // doc dau enter xuong dong
	for (int i = 0; i <n; i++){
		getline(fi, line);      // doc 1 dong tu file
		fo << (i+1) << "." << line << '\n';   // ghi 1 dong ra file
	}
	fi.close();
	fo.close();
	return 0;
}
