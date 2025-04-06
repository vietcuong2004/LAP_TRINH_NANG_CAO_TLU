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

Node* TaoNode(double Value){
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
}

void ThemDau(Node* &head, Node* &tail, double Value){
	Node* NewNode = TaoNode(Value);
	NewNode->Next = head;
	head = NewNode;
}

void ThemCuoi(Node* &head, Node* &tail, double Value){
	Node *NewNode = TaoNode(Value);
	if(head == NULL){
		head = NewNode;
		tail = NewNode;
	}
	else{
		tail->Next = NewNode;
		tail = NewNode;
	}
}

void In(Node *head){
	cout << "Hien thi danh sach:";
	while(head != NULL){
		cout << " " << head->Data;
		head = head->Next;
	}
}

double Tong(Node* head){
	double s = 0;
	while(head != NULL){
		s += head->Data;
		head = head->Next;
	}
	return s;
}

void XoaDau(Node* &head, Node* &tail){
	Node* p = head;
	head = head->Next;
	delete p;
	p = NULL;
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

int main(){
	// Khoi tao:
	int n;
	Node *head, *tail;
	KhoiTao(head,tail);
	
	// Nhap n:
	do{
		cout << "Cho n = ";
		cin >> n;
	}
	while (n<5 || n>=100);
	
	// Nhap phan tu, them cuoi:
	for(int i=1; i<=n;i++){
		double a;
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> a;
		ThemCuoi(head,tail,a);
	}
	In(head);
	
	// Xoa phan tu dau va cuoi danh sach:
	cout << "\nHay xoa phan tu o dau va cuoi danh sach!\n";
	XoaDau(head,tail);
	XoaCuoi(head,tail);
	In(head);
	
	// Them x vao dau va cuoi danh sach:
	double x;
	cout << "\nCho x = ";
	cin >> x;
	cout << "\nHay them x vao dau va cuoi danh sach!\n";
	ThemDau(head,tail,x);
	ThemCuoi(head,tail,x);
	In(head);
	
	// Tinh tong cac phan tu:
	cout << "\nTong cac phan tu: " << Tong(head);
	
	// Giai phong bo nho:
	Node *p = head;
	while(head != NULL){
		head = head->Next;
		delete p;
		p = head;
	}
	return 0;
}
