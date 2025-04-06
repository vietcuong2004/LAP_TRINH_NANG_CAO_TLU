#include<bits/stdc++.h>
using namespace std;

struct Node{
	double Data;
	Node *Next;
};

// Khoi tao:
void KhoiTao(Node* &head, Node* &tail){
	head = NULL;
	tail = NULL;
}

// Tao node moi:
Node *TaoNode(double Value){
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
	return NewNode;
}

// Them dau:
void ThemDau(Node *&head, Node* &tail, double Value){
	Node* NewNode = TaoNode(Value);
	NewNode->Next = head;
	head = NewNode;	
}

//Them cuoi:
void ThemCuoi(Node *&head, Node* &tail, double Value){
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

// Xoa cuoi:
void XoaCuoi(Node*&head, Node* &tail){
	Node* t = tail;
	Node* prev = head;
	while(prev!=NULL){
		if(prev->Next == tail){
			break;
		}
		prev = prev->Next;
	}	
	prev->Next = NULL;
	tail = prev;
	delete t;
	
}

//Do dai danh sach:
int DoDai(Node*head){
	int len = 0;
	while(head!=NULL){
		len++;
		head = head->Next;
	}
	return len;
}

// In ds:
void In(Node* head){
	while(head != NULL){
		cout << " " << head->Data;
		head = head->Next;
	}
}

int main(){
	int n;
	Node *head, *tail;
	KhoiTao(head, tail);
	do{
		cout << "Cho so phan tu n = ";
		cin >> n ;
	}
	while(n<=4);
	double a;
	for (int i=1;i<=n;i++){
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> a;
		ThemCuoi(head,tail,a);
	}
	cout << "\nHien thi danh sach:";
	In(head);
	
	// Them x:
	double x;
	cout << "\nCho x = "; cin >> x;
	cout << "Hay them x vao dau va cuoi danh sach.";
	ThemDau(head,tail,x);
	ThemCuoi(head,tail,x);
	cout << "\nHien thi danh sach:";
	In(head);
	
	//Xoa cuoi danh sach:
	XoaCuoi(head,tail);
	cout << "\nHay xoa o cuoi danh sach.";
	cout << "\nHien thi danh sach:";
	In(head);
	
	//Do dai cua danh sach:
	cout << "\nDo dai cua DS = " << DoDai(head);
	return 0;
}
