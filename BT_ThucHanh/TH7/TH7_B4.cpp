#include<bits/stdc++.h>
using namespace std;

// Cau truc Sinh Vien:
struct SinhVien{
	int MSV;
	double Diem;
	string Ten;
};
typedef SinhVien SV;

// 1 Node cua DSLK:
struct Node{
	SV Data;
	Node *Next;
};

// Khoi tao DS:
void Khoi_Tao_DSLK(Node* &head ,Node* &tail){
	head = NULL;
	tail = NULL;
}

// Nhap thong tin 1 SV:
void Nhap_SV(SV &x){
	cout << ">> MSV: ";
	cin >> x.MSV;
	cin.ignore();
	cout << ">> Ho Ten: ";
	getline(cin,x.Ten);
	cout << ">> Diem: ";
	cin >> x.Diem;
}

// Tao 1 node SV moi:
Node* Tao_Node(SV x){
	Node* NewNode = new Node;
	NewNode->Data = x;
	NewNode->Next = NULL;
	return NewNode;
}
// Them 1 Sinh Vien vao cuoi DSLK:
void Them_Cuoi (Node* &head ,Node* &tail, SV x){
	Node *NewNode = Tao_Node(x);
	if (head == NULL){
		head = NewNode;
		tail = NewNode;
	}
	else{
		tail->Next = NewNode;
		tail = NewNode;
	}
}

// Them 1 sinh vien vao dau DSLK:
void Them_Dau(Node *&head, SV x){
	Node* NewNode = Tao_Node(x);
	NewNode->Next = head;
	head = NewNode;
}

// In ra danh sach sinh vien:
void In(Node *head){
	int i=1;
	while (head != NULL){
		cout << "\n" << i << ".MSV: " << head->Data.MSV;
		cout << ", Ten: " << head->Data.Ten;
		cout << ", Diem: " << head->Data.Diem;
		head = head->Next;
		i++;
	}
}

// Tim diem lon nhat trong danh sach sinh vien:
double Diem_Max(Node *head){
	double diem_max = -9999;
	while (head != NULL){
		if (head->Data.Diem > diem_max)
			diem_max = head->Data.Diem;
		head = head->Next;
	}
	return diem_max;
}

// In ra cac sinh vien co cung so diem cao nhat:
void DS_Diem_Max(Node *head){
	double diem_max = Diem_Max(head);
	int i=1;
	while (head != NULL){
		if (head->Data.Diem == diem_max){
			cout << "\n" << i << ".MSV: " << head->Data.MSV;
			cout << ", Ten: " << head->Data.Ten;
			cout << ", Diem: " << head->Data.Diem;
			i++;
		}
		head = head->Next;
	}
}

// Tim sinh vien co ten x
Node* Tim_SV_x(Node *head, string Ten_X){
	Node* str = head;
	while(str != NULL){
		if (str->Data.Ten == Ten_X){
			return str;
		}
		str = str->Next;
	}
	return NULL;
}

// Muốn xóa min thì cần tìm vị trí trước của node min.
// (Do nút trước của node min mới quản lý được node min)
// Tim vi tri cua node min:
Node* Vi_Tri_Min(Node *head){
	Node *min_p = head;
	int min = 9999;
	// tìm vị trí cuả node min
	while(head != NULL){
		if (head->Data.Diem < min){
			min = head->Data.Diem;
			min_p = head; 
		}
		head = head->Next;
	}
	return min_p;
}

// Xóa node min:
void Xoa_Min(Node* &head, Node* &tail){
	Node *pos_min = Vi_Tri_Min(head);
	// Xóa đầu:
	if(pos_min == head){
		head = pos_min->Next; //Cập nhật vị trí cho head;
		delete pos_min; //Xóa vùng nhớ của phần tử min; 
	}

	//Xóa cuối:
	else if(pos_min == tail){
		Node* prev_min = head; 
		while(prev_min != NULL){
			if(prev_min->Next == pos_min){
				prev_min->Next = NULL; 
				delete tail;
				tail = prev_min;
			}
			prev_min = prev_min->Next;
		}
	}

	//Xóa giữa:
	else{
		// Tìm vị trí trước min:
		Node* prev_min = head; // Con trỏ tới vị trí trước min
		Node* current = head; // Con trỏ phụ dùng để duyệt dslk tìm vị trí trước min
		while(current != NULL){
			if(current->Next == pos_min){
				prev_min = current;
			}
			current = current->Next;
		}

		// Xóa min sau khi đẫ tìm thấy prev_min:
		prev_min->Next = pos_min->Next; // Cho nút trước min liên kết với nút sau min
		delete pos_min;
	}
}

int main(){
	// Khoi tao:
	Node *head, *tail;
	Khoi_Tao_DSLK(head,tail);
	
	// Nhap vao n sinh vien:
	int n;
	SV x;
	cout << "# So sinh vien: ";
	cin >> n;
	for (int i=1;i<=n;i++){
		cout << "# Nhap sinh vien thu " << i << ":\n";
		Nhap_SV(x);
		Them_Cuoi(head,tail,x);
	}
	// In ra man hinh dssv vua nhap:
	cout << "\n# Danh sach sinh vien vua nhap:";
	In(head);
	
	// In ra Danh sach sinh vien co diem cao nhat:
	cout << "\n\n# Danh sach sinh vien co diem cao nhat:";
	DS_Diem_Max(head);
	
	// Tim sinh vien co ten X trong Danh sach:
	cout << "\n\n# Nhap ten sinh vien can tim: ";
	string Ten_Can_Tim;
	cin.ignore();
	getline(cin,Ten_Can_Tim);
	Node *kq = Tim_SV_x(head,Ten_Can_Tim);
	if (kq != NULL){
		cout << ">> Thong tin sinh vien can tim:\n";
		cout << "   MSV: " << kq->Data.MSV;
		cout << ", Ho Ten: " << kq->Data.Ten;
		cout << ", Diem: " << kq->Data.Diem;
	}
	else{
		cout << ">> Khong tim thay sinh vien \'" << Ten_Can_Tim << "\'\n";
		cout << ">> Them \'" << Ten_Can_Tim << "\' vao dau danh sach:\n";
		x.Ten = Ten_Can_Tim;
		cout << "+ Nhap MSV: "; cin >> x.MSV;
		cout << "+ Nhap Diem: "; cin >> x.Diem;
		Them_Dau(head,x);
		cout << "\n# Danh sach sinh vien sau khi them \'" << Ten_Can_Tim << "\':";
		In(head);
	}

	// Xoa sinh vien co diem thap nhat:
	Xoa_Min(head,tail);
	cout << "\n\n# Danh sach sinh vien sau khi xoa SV co diem thap nhat:";
	In(head);

	// Giai phong bo nho:
	while (head != NULL) {
    	Node* temp = head;
    	head = head->Next;
    	delete temp;
	}
	tail = NULL;
	return 0;
}