#include<bits/stdc++.h>
using namespace std;

struct Node{
	int Data;
	Node* Next;
};

void KhoiTao(Node* &head, Node* &tail){
	head = NULL;
	tail = NULL;
}

Node* TaoNode(int Value){
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
}

void ThemDau(Node* &head, Node* &tail, int Value){
	Node* NewNode = TaoNode(Value);
	NewNode->Next = head;
	head = NewNode;
}

void ThemCuoi(Node* &head, Node* &tail, int Value){
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
	cout << "In danh sach:";
	while(head != NULL){
		cout << " " << head->Data;
		head = head->Next;
	}
}

int TongChan(Node* head){
	int tong = 0;
	while (head != NULL){
		if(head->Data % 2 == 0)
			tong+=head->Data;
		head = head->Next;
	}
	return tong;
}

int main(){
	//Khoi tao:
	int n,a;
	Node* head, *tail;
	KhoiTao(head,tail);
	// Nhap N:
	do{
		cout << "Cho n = ";
		cin >> n;
	}
	while(n<5 || n>=100);
	// Them phan tu vao cuoi danh sach:
	for (int i=1;i<=n;i++){
		cout << "Nhap phan tu " << i << ": ";
		cin >> a;
		ThemCuoi(head,tail,a);
	}
	// Them x vao dau ds:
	int x;
	cout << "Cho x = "; cin >> x;
	ThemDau(head,tail,x);
	cout << "Hay them x vao dau danh sach!\n";
	In(head);
	//Tong cac so chan:
	cout << "\nTong cac so chan: " << TongChan(head);
	return 0;
}
