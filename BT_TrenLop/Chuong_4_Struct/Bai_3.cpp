#include<bits/stdc++.h>
using namespace std;
struct Node{
	int Data;
	Node *Next;
};

// Khoi tao DSLK rong:
void Khoi_Tao(Node * &head, Node* &tail){
	head = NULL;
	tail = NULL;
}

// Tao Node moi:
Node *Tao_Node(int Gia_tri){
	Node *NewNode = new Node;
	NewNode->Data = Gia_tri;
	NewNode->Next = NULL;
	return NewNode;
}

//Them vao cuoi danh sach:
void Them_Vao_Cuoi(Node *&head, Node* &tail, int GiaTri){
	Node *NewNode = Tao_Node(GiaTri);
	// Tao con tro moi tro vao dau dslk:
	if (head == NULL){
		head = NewNode;
		tail = NewNode;
	}
	else{
		tail->Next = NewNode;
		tail = NewNode;
	}
}

void Them_Vao_Dau(Node* &head,int GiaTri){
	Node *NewNode = Tao_Node(GiaTri);
	NewNode->Next = head;
	head = NewNode;
}
// In ra dslk:
void In_DSLK(Node *head){
	while (head != NULL){
		cout << " " << head->Data;
		head = head->Next;
	}
}

// Dem so so chan co trong DSLK:
int Dem_Node_Chan(Node *head){
	int count = 0;
	while (head != NULL){
		if (head->Data %2 == 0) count++;
		head = head->Next;
	}
	return count;
}

int main(){
	int n,x;
	// Khoi tao dslk:
	Node *head, *tail;
	Khoi_Tao(head,tail);
	
	// So node cua dslk:
	cout << "# Nhap so Node: ";
	cin >> n;
	for (int i=0; i<n; i++){
		cout << ">> Node " << i+1 << ": ";
		cin >> x;
		Them_Vao_Cuoi(head,tail,x);
	}
	
	// Them vao dau danh sach:
	int t;
	cout << "\nt = "; cin >> t;
	Them_Vao_Dau(head,t);
	// In ra DSLK vua tao:
	cout << "# DSLK vua tao:";
	In_DSLK(head);
	
	// Dem so node chan trong DSLK:
	cout << "\n# So so chan co trong DSLK: " << Dem_Node_Chan(head);
	
	// Giai phong bo nho:
	delete[] head;
	delete[] tail;
	head = NULL;
	tail = NULL;
	return 0;
}
