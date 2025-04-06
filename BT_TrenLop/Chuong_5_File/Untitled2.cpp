#include <iostream> 
#include <fstream>
using namespace std;
int main(){
	int a[10][10];
	int n;
	ifstream MaTran("MaTran.txt");
	if(!MaTran.is_open()){
		cout<<"Khong the mo file!\n";
		return 0;
	}
	else {
		MaTran>>n;
		for(int i = 0; i < n; i++)  
			for(int j = 0; j < n; j++)
				MaTran>>a[i][j];
	}
	cout<<"Hien thi ma tran:\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout<<" "<<a[i][j];
			cout<<"\n";
	}
	MaTran.close();
	system("pause");
	return 0;
}
