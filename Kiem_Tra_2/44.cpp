#include<bits/stdc++.h>
using namespace std;
struct SV{
	string MSV;
	string Ten;
	int NamSinh;
};

struct Node{
	SV Data;
	Node* Next;
};

void KhoiTao(Node* &head, Node* &tail){
	head = NULL;
	tail = NULL;
}

Node* TaoNode(SV x){
	Node* NewNode = new Node;
	NewNode->Data = x;
	NewNode->Next = NULL;
	return NewNode;
}

void ThemCuoi(Node* &head, Node* &tail, SV Value){
	Node* NewNode = TaoNode(Value);
	if (head == NULL){
		head = NewNode;
		tail = NewNode;
	}
	else{
		tail->Next = NewNode;
		tail = NewNode;
	}
}

void ThemDau(Node *&head, Node *&tail, SV Value){
	Node *NewNode = TaoNode(Value);
	NewNode->Next = head;
	head = NewNode;
}

void In(Node *head){
	cout << "Hien thi danh sach:\n";
	while(head != NULL){
		cout << head->Data.MSV << "\t" << head->Data.Ten << "\t" << head->Data.NamSinh << "\n";
		head = head->Next; 
	}
}

int main(){
	SV a;
	Node *head, *tail;
	KhoiTao(head,tail);
	while(1){
		cout << "Nhap MaSV: ";
		getline(cin,a.MSV);
		if(a.MSV == "") break;
		cout << "Nhap ten: ";
		getline(cin,a.Ten);
		cout << "Nam sinh: ";
		cin >> a.NamSinh;
		cin.ignore();
		ThemCuoi(head,tail,a);
	}
	In(head);
	
	// Them SV vao dau danh sach:
	SV x;
	cout << "Cho SV can them vao dau DS:\n";
	cout << "MaSV: ";
	getline(cin,x.MSV);
	cout << "Ten: ";
	getline(cin,x.Ten);
	cout << "Nam sinh: ";
	cin >> x.NamSinh;
	ThemDau(head,tail,x);
	In(head);
	return 0;
}
