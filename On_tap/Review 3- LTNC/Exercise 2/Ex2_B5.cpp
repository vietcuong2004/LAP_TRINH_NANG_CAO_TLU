#include<bits/stdc++.h>
using namespace std;

struct SV{
	string Ten;
	double Diem;
};

struct Node{
	SV Data;
	Node* Next;
};

void NhapSV(SV &x, string tb1, string tb2){
	// Nhap ten SV:
	cout << tb1; getline(cin,x.Ten);
	while(1){
		cout << tb2; // Nhap diem
		cin >> x.Diem;
		if (x.Diem >=0 && x.Diem<=10) break;
		else cout << "Nhap lai diem thi!\n";
	}
	cin.ignore();
}

void KhoiTao(Node* &head, Node* &tail){
	head = NULL;
	tail = NULL;
}

Node *TaoNode(SV Value){
	Node *NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
	return NewNode;
}

void ThemCuoi(Node *&head, Node* &tail, SV Value){
	Node* NewNode = TaoNode(Value);
	if(head == NULL){
		head = NewNode;
		tail = NewNode;
	}
	else{
		tail->Next = NewNode;
		tail = NewNode;
	}
}

void In(Node* head){
	while(head != NULL){
		cout << head->Data.Ten << "\t" << head->Data.Diem << endl;
		head = head->Next;
	}
}

int main(){
	// Khoi tao:
	int n;
	Node *head, *tail;
	KhoiTao(head,tail);
	SV a;
	
	//Nhap n:
	do{
		cout << "Cho N = "; 
		cin >> n;
	}
	while(n<=0 || n>=100);
	cin.ignore();
	
	// Nhap n sinh vien:
	for (int i=1; i<=n;i++){
		NhapSV(a,"Ho va ten: ","Diem: ");
		ThemCuoi(head,tail,a);
	}
	
	// Them x vao cuoi:
	SV x;
	cout << "Thong tin sinh vien them vao DS:\n";
	NhapSV(x,"Ho va Ten: ","Diem thi: ");
	ThemCuoi(head,tail,x);
	
	// In Danh sach:
	cout << "In lai danh sach:\n";
	In(head);
	return 0;
}
