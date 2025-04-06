#include<bits/stdc++.h>
using namespace std;

struct SV{
	string HoTen;
	double DiemThi;
};

struct Node{
	SV Data;
	Node *Next;
};

void KhoiTao(Node *&head, Node* &tail){
	head = NULL;
	tail = NULL;
}

Node* TaoNode(SV Value){
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
	return NewNode;
}

void ThemCuoi(Node* &head, Node* &tail, SV Value){
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

void In(Node* head){
	cout << "In lai danh sach:\n";
	while (head != NULL){
		cout << head->Data.HoTen << "\t" << head->Data.DiemThi << endl;
		head = head->Next;
	}
}

void NhapSV(Node* &head,Node* &tail,SV a){
	cout << "Ho va ten: ";
	getline(cin,a.HoTen);
	while(1){
		cout << "Diem: ";
		cin >> a.DiemThi;
		cin.ignore();
		if(a.DiemThi>=0 && a.DiemThi<=10)
			break;
		else
			cout << "Nhap lai diem thi!\n";
		
	}
	ThemCuoi(head,tail,a);
}

int main(){
	Node* head, *tail;
	KhoiTao(head,tail);
	// Nhap n:
	int n;
	do{
		cout << "Cho N = ";
		cin >> n;
	}
	while(n<=0 || n>=100);
	cin.ignore();
	// Nhap thong tin 1 sinh vien va them sv vao cuoi dslk:
	SV a;
	for(int i = 1;i<=n;i++){
		NhapSV(head,tail,a);
	}
	
	//Them sinh vien x:
	SV x;
	cout << "Thong tin sinh vien them vao DS:\n";
	cout << "Ho va Ten: ";
	getline(cin,x.HoTen);
	while(1){
		cout << "Diem thi: ";
		cin >> x.DiemThi;
		cin.ignore();
		if(x.DiemThi>=0 && x.DiemThi<=10)
			break;
		else
			cout << "Nhap lai diem thi!\n";
		
	}
	ThemCuoi(head,tail,x);
	In(head);
}
