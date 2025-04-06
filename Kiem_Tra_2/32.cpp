#include<bits/stdc++.h>
using namespace std;

struct Node{
	int Data;
	Node *Next;
};

void KhoiTao(Node* &head, Node* &tail){
	head = NULL;
	tail = NULL;
}

Node* TaoNode(int Value){
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
	return NewNode;
}

void ThemDau(Node* &head, Node* &tail, int Value){
	Node* NewNode = TaoNode(Value);
	NewNode->Next = head;
	head = NewNode;
}

void In(Node* head){
	while(head != NULL){
		cout << " " << head->Data;
		head = head->Next;
	}
}

int TongChan(Node* head){
	int s=0;
	while(head != NULL){
		if (head->Data % 2 == 0){
			s += head->Data;
		}
		head = head->Next;
	}
	return s;
}

int main(){
	int n;
	Node *head, *tail;
	KhoiTao(head,tail);
	
	// Nhap N:
	do{
		cout << "Cho n = ";
		cin >> n;
	}
	while(n<5 || n>=100);
	
	// Nhap cac phan tu cua dslk va them vao dau:
	int a,x;
	for(int i = 1; i<=n; i++){
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> a;
		ThemDau(head,tail,a);
	}
	
	// Them x vao dau:
	cout << "Cho x = ";
	cin >> x;
	cout << "Hay them x vao dau danh sach!\n";
	ThemDau(head,tail,x);
	cout << "In danh sach:";
	In(head);
	
	// Tinh tong cac so chan:
	cout << "\nTong cac so chan: " << TongChan(head);
	return 0;
}
