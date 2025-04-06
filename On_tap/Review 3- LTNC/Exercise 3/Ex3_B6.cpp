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

void In(Node* head){
	cout << "Hien thi lai danh sach:";
	while(head != NULL){
		cout << " " << head->Data;
		head = head->Next;
	}
}

bool SNT(int x){
	int end = int(sqrt(x));
	if (x==1) return false;
	for(int i=2;i<=end;i++){
		if(x%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	Node* head, *tail;
	KhoiTao(head,tail);
	do{
		cout << "Cho n = ";
		cin >> n;
	}
	while(n<10 || n>100);
	for(int i=2; i<=n; i++){
		if(SNT(i)){
			ThemCuoi(head,tail,i);
		}
	}
	In(head);
	int x;
	cout << "\nCho so nguyen x = "; cin >> x;
	if(SNT(x)){
		cout << "x la so nguyen to. Hay them x vao dau danh sach.\n";
		ThemDau(head,tail,x);
	}
	else
		cout << "x khong phai la so nguyen to!\n";
	In(head);
	cout << "\n";
	return 0;
}
