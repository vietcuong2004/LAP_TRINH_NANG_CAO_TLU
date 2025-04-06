#include<bits/stdc++.h>
using namespace std;

struct Node{
	int Data;
	Node *Next;
};

void KhoiTao(Node*&head, Node*&tail){
	head = NULL;
	tail = NULL;
}

Node* TaoNode(int Value){
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
	return NewNode;
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

void InDS(Node* head){
	cout << "In danh sach:";
	while(head != NULL){
		cout << " " << head->Data;
		head = head->Next;
	}
}

// Xoa cuoi:
void XoaCuoi(Node* &head, Node* &tail){
	// Tim vi tri truoc node cuoi:
	Node *prev, *p = head;
	while(p != NULL){
		if(p->Next == tail){
			prev = p;
			break;
		}
		p = p->Next;
	}
	// Xoa nut cuoi:
	prev->Next = NULL;
	delete tail;
	tail = prev;
}

// Them dau:
void ThemDau(Node* &head, Node* &tail, int Value){
	Node* NewNode = TaoNode(Value);
	NewNode->Next = head;
	head = NewNode;
}

int main(){
	int n,a;
	Node *head, *tail;
	KhoiTao(head,tail);
	// Nhap n:
	do{
		cout << "Cho n = ";
		cin >> n;
	}
	while (n<5);
	
	// Nhap va in dslk:
	for(int i=0; i<n;i++){
		cout << "Nhap phan tu: ";
		cin >> a;
		ThemCuoi(head,tail,a);
	}
	InDS(head);
	
	// Xoa phan tu o cuoi:
	cout << "\nHay xoa phan tu o cuoi danh sach!\n";
	XoaCuoi(head,tail);
	InDS(head);
	
	// Them dau danh sach:
	int x;
	cout << "\nCho x = "; cin >> x;
	cout << "Hay them x vao dau danh sach!\n";
	ThemDau(head,tail,x);
	InDS(head);
	
	// Giai phong bo nho:
	Node *current;
	while(head != NULL){
		current = head;
		delete current;
		head = head->Next;
	}
	return 0;
}

