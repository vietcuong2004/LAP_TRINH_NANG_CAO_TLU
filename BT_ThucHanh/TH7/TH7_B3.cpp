#include<bits/stdc++.h>
using namespace std;

// Cau truc Node:
struct Node{
	double Data;
	Node *Next;
};

//Ham khoi tao DSLK:
void Khoi_Tao(Node* &head, Node* &tail){
	head = NULL;
	tail = NULL;
}

// Tao 1 node moi:
Node* Tao_Node(double Value){
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->Next = NULL;
	return NewNode;
}

// Them vao cuoi:
void Them_Cuoi(Node* &head, Node* &tail, double Value){
	Node *NewNode = Tao_Node(Value);
	if (head == NULL){
		head = NewNode;
		tail = NewNode;
	}
	else{
		tail->Next = NewNode;
		tail = NewNode;
	}
}

// Them vao dau DSLK:
void Them_Dau(Node* &head, double Value){
	Node* NewNode = Tao_Node(Value);
	NewNode->Next = head;
	head = NewNode;
}

// In ra DSLK:
void In_DSLK(Node *head){
	while (head != NULL){
		cout << " " << head->Data;
		head = head->Next;
	}
}

// In ra cac so chia het cho 3:
void In_Chia_3(Node *head){
	while(head != NULL){
		if (head->Data != int(head->Data)) // Neu la so thuc thi bo qua
			head = head->Next;;
		if(int(head->Data)%3 == 0)
			cout << " " << head->Data;
		head = head->Next;
	}	
}

// Kiem tra so nguyen to:
bool SNT(double x){
	if (x != int(x))
		return false; // Neu la so thuc thi chac chan khong phai SNT
	else{
		int t = int(x);
		int end = int(sqrt(t));
		for(int i=2; i<=end; i++)
			if (t%i == 0)
				return false;
	}
	return true;
}

// Dem, In ra cac so nguyen to co trong DSLK:
void In_SNT(Node *head, int &count){
	count = 0;
	while(head != NULL){
		if (SNT(head->Data)){
			cout << " " << head->Data;
			count ++;
		}
		head = head->Next;
	}
}

// Kiem tra tang dan:
bool Kiem_Tra_Tang(Node *head){
	while (head != NULL && head->Next!=NULL){
		if (head->Data > (head->Next)->Data)
			return false;
		head = head->Next;
	}
	return true;
}

// Xoa phan tu o dau danh sach:
void Xoa_Dau(Node *&head){
	Node *str = head;
	head = head->Next;
	delete str;
	str = NULL;
}

int main(){
	int n;
	Node* head, *tail;
	// Khoi tao:
	Khoi_Tao(head,tail);
	
	//Them n>=5 so thuc vao DSLK:
	do{
		cout << "# Nhap so nut n (n>=5): ";
		cin >> n;
	}
	while(n<5);
	for (int i=1; i<=n;i++){
		double x;
		cout << ">> Node thu " << i << ": ";
		cin >> x;
		Them_Cuoi(head,tail,x);
	}
	
	// In ra dslk:
	cout << "\n# DSLK vua tao:";
	In_DSLK(head);
	
	// In ra cac so chia het cho 3:
	int count = 0;
	cout << "\n# Cac so chia het cho 3 trong DSLK:";
	In_Chia_3(head);
	
	// In ra cac so nguyen to co trong DSLK:
	cout << "\n# Cac so nguyen to co trong DSLK:";
	In_SNT(head,count);
	cout << "\n-> Co " << count << " so nguyen to trong DSLK.";
	
	// Kiem tra day tang dan:
	cout << "\n# Day tang dan? ";
	if(Kiem_Tra_Tang(head))
		cout << "Yes";
	else cout << "No";
	
	// In ra danh sach sau khi xoa dau:
	Xoa_Dau(head);
	cout << "\n# DSLK sau khi xoa dau:";
	In_DSLK(head);
	
	// Them x vao cuoi danh sach:
	double x;
	cout << "\n# Them vao cuoi danh sach x = "; cin >>x;
	Them_Cuoi(head,tail,x);
	cout << ">> DSLK sau khi them " << x << ":";
	In_DSLK(head);
	
	// Giai phong bo nho:
	while(head != NULL){
		Node*tmp = head;
		head = head->Next;
		delete tmp;
	}
	tail = NULL;
	return 0;
}
