#include<bits/stdc++.h>
using namespace std;
struct Node{
	double Data;
	Node *Next;
};

// Khoi tao:
void KhoiTao(Node *&head, Node *&tail){
	head = NULL;
	tail = NULL;
}

// Tao node moi:
Node *TaoNode(double Value){
	Node *NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
	return NewNode;
}

// Them node moi vao cuoi:
void ThemCuoi(Node *&head, Node *&tail, double Value){
	Node *NewNode = TaoNode(Value);
	if (head == NULL){
		head = NewNode;
		tail = NewNode;
	}
	else{
		tail->Next = NewNode;
		tail = NewNode;
	}
}

// In:
void InDS(Node *head){
	while(head != NULL){
		cout << " " << head->Data;
		head = head->Next;
	}
}

int main(){
	int n;
	do{
		cout << "Cho N = ";
		cin >> n;
	}	
	while(n<0 || n>=100);
	Node *head, *tail;
	KhoiTao(head,tail);
	for (int i=1;i<=n;i++){
		cout << "Phan tu thu " << i << ": ";
		double x;
		cin >> x;
		ThemCuoi(head,tail,x);
	}
	cout << "Danh sach:";
	InDS(head);
	double x;
	cout << "\nCho x = "; cin >> x;
	ThemCuoi(head,tail,x);
	cout << "Danh sach:";
	InDS(head);	
	return 0;
}
