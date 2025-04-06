#include<bits/stdc++.h>
using namespace std;
struct Node{
	int Data;
	Node *Next;
};

// Khởi tạo DSLK:
void Khoi_Tao(Node * &front){
	front = NULL;
}

// Tạo Node mới:
Node *Tao_Node(int Giatri){
	Node *New_Node = new Node;
	New_Node->Data = Giatri;
	New_Node->Next = NULL;
	return New_Node;
}

// Thêm 1 node vào đầu DSLK:
void Them_Vao_Dau(Node * &front, int Giatri){
	Node * New_Node = Tao_Node(Giatri); 
	New_Node->Next = front;
	front = New_Node;
}
void In_DSLK(Node *front){
	while(front != NULL){
		cout << " " << front->Data;
		front = front->Next;
	}
}

int Tong_DSLK(Node *str){
	int tong = 0;
	while (str != NULL){
		tong += str->Data;
		str = str->Next;
	}
	return tong;
}
int main(){
	int n,x;
	// Khởi tạo danh sách:
	Node *front;
	Khoi_Tao(front);
	cout << "# Nhap so node cua DSLK: ";
	cin >> n;
	for (int i=0;i<n;i++){
		cout << ">> Node " << i+1 << ": ";
		cin >> x;
		Them_Vao_Dau(front,x);
	}

	// In ra DSLK:
	cout << "# DSLK vua tao:";
	In_DSLK(front);

	// Tính tổng các phần tử trong DSLK:
	cout << "\n# Tong cac phan tu: " << Tong_DSLK(front);
	
	// Giải phóng bộ nhớ:
	delete [] front;
	front = NULL;
	In_DSLK(front);
	return 0;
}