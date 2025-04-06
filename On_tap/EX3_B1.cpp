#include<bits/stdc++.h>
using namespace std;

struct Node{
	double Data;
	Node *Next;
};

void KhoiTao(Node* &head, Node* &tail){
	head = tail = NULL;
}

Node* TaoNode(double Value){
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
	return NewNode;
}

void ThemCuoi(Node* &head, Node* &tail, double Value){
	Node* NewNode = TaoNode(Value);
	if (head == NULL){
		head = tail = NewNode;
	}
	else{
		tail->Next = NewNode;
		tail = NewNode;
	}
}

void In(Node* head){
	cout << "Danh sach:";
	while(head != NULL){
		cout << " " << head->Data;
		head = head->Next;
	}
}

int main(){
	int n;
	Node *head, *tail;
	KhoiTao(head,tail);
	do{
		cout << "Cho N = ";
		cin >> n;
	}
	while(n>=100 || n<0);
	for(int i=1;i<=n;i++){
		double x;
		cout << "Phan tu thu " << i << ": ";
		cin >> x;
		ThemCuoi(head,tail,x);
	}
	In(head);
	double x;
	cout << "\nCho x = "; cin >> x; ThemCuoi(head,tail,x);
	In(head);
	
	// Xoa bo nho:
	Node *p = head;
	while(p!=NULL){
		Node* NextNode = new Node;
		NextNode = p->Next;
		delete p;
		p = NextNode;	
	}
	head = tail = NULL;
	return 0;
}
