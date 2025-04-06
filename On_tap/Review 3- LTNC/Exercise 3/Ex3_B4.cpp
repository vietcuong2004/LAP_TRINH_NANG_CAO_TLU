#include<bits/stdc++.h>
using namespace std;

struct Node{
	double Data;
	Node *Next;
};

void KhoiTao(Node *&head, Node *&tail){
	head = NULL;
	tail = NULL;
}

Node* TaoNode(double Value){
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
	return NewNode;
}

void ThemDau(Node* &head, Node* &tail, double Value){
	Node* NewNode = TaoNode(Value);
	NewNode->Next = head;
	head = NewNode;
}

void ThemCuoi(Node* &head, Node* &tail,double Value){
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
	cout << "\nHien thi danh sach:";
	while(head != NULL){
		cout << " "<< head->Data;
		head = head->Next;
	}
}

void XoaCuoi(Node* &head, Node* &tail){
	Node *prev = head;
	// Tim vi tri truoc node cuoi:
	while(prev != NULL){
		if(prev->Next == tail)
			break;
		prev = prev->Next;
	}
	// Xoa Node cuoi:
	delete tail;
	tail = prev;
	prev->Next = NULL;
}

int DoDai(Node* head){
	int len = 0;
	while (head!=NULL){
		len += 1;
		head = head->Next;
	}
	return len;
}

int main(){
	// Khoi tao:
	int n;
	Node *head, *tail;
	KhoiTao(head,tail);
	
	// Nhap:
	do{
		cout << "Cho so phan tu n = ";
		cin >> n;
	}
	while(n<=4);
	for(int i=1; i<=n;i++){
		double a;
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> a;
		ThemCuoi(head,tail,a);
	}
	In(head);
	
	// Them x vao dau danh sach:
	double x;
	cout << "\nCho x = "; cin >> x;
	cout << "Hay them x vao dau va cuoi danh sach.";
	ThemDau(head,tail,x);
	ThemCuoi(head,tail,x);
	In(head);
	
	// Xoa cuoi danh sach:
	XoaCuoi(head,tail);
	cout <<"\nHay xoa o cuoi danh sach:";
	In(head);
	
	// Do dai danh sach:
	cout << "\nDo dai cua DS = " << DoDai(head);
	return 0;
}
