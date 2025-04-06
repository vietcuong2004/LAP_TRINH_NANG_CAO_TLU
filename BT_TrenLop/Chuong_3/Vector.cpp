#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	vector<int> V(3);
	V[0] = 1;
	V[1] = 2;
	V[2] = 3;
	V.insert(V.begin()+2,4);
	for (int i=0;i<V.size();i++)
		cout << V[i] << " ";
	return 0;
}