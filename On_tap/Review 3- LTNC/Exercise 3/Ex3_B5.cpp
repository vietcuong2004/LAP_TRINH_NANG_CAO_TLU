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
	return NewNode;
}

void ThemDau(Node* &head, Node* &tail, int Value){
	Node* NewNode = TaoNode(Value);
	NewNode->Next = head;
	head = NewNode;
}

void ThemCuoi(Node* &head, Node* &tail, int Value){
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

int Tong(Node* head){
	int s = 0;
	while(head != NULL){
		s += head->Data;
		head = head->Next;
	}
	return s;
}

void In(Node* head){
	cout << "Hien thi danh sach:";
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
		cout << "Cho n = ";
		cin >> n;
	}
	while(n<20);
	int i;
	for(i=1;i<=n;i++){
		if(i%2 == 0){
			ThemCuoi(head,tail,i);
		}
	}
	In(head);
	int x;
	cout << "\nCho so nguyen x = ";
	cin >> x;
	if(x%2 == 0){
		ThemDau(head,tail,x);
		cout << "Them x vao dau danh sach!\n";
	}
	else{
		cout << "Them x vao cuoi danh sach!\n";
		ThemCuoi(head,tail,x);
	}
	In(head);
	cout <<"\nTong cac phan tu: " << Tong(head);
	return 0;
}
