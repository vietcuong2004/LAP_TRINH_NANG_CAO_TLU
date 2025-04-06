#include<bits/stdc++.h>
using namespace std;

struct Node{
	double Data;
	Node *Next;
};

void KhoiTao(Node* &head, Node* &tail){
	head = NULL;
	tail = NULL;
}

Node *TaoNode(double Value){
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
	return NewNode;
}

void ThemCuoi(Node* &head, Node* &tail, double Value){
	Node* NewNode = TaoNode(Value);
	if (head == NULL){
		tail = NewNode;
		head = NewNode;
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
	//Nhap N:
	do{
		cout << "Cho N = ";
		cin >> n;
	}
	while (n<0 || n>=100);
	//Nhap DSLK, them cuoi:
	for(int i=1;i<=n;i++){
		double a;
		cout << "Phan tu thu " << i << ": ";
		cin >> a;
		ThemCuoi(head,tail,a);
	}
	In(head);
	// Them x vao cuoi:
	double x;
	cout << "\nCho x = ";
	cin >> x;
	ThemCuoi(head,tail,x);
	In(head);
	return 0;
}
