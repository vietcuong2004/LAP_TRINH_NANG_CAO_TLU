#include <iostream>
#include <string>

struct SinhVien {
    int maSV;
    std::string ten;
    float diem;
    SinhVien* next;
};

SinhVien* themSinhVien(SinhVien* head, int maSV, const std::string& ten, float diem) {
    SinhVien* newSV = new SinhVien;
    newSV->maSV = maSV;
    newSV->ten = ten;
    newSV->diem = diem;
    newSV->next = head;
    return newSV;
}

void inDanhSach(SinhVien* head) {
    SinhVien* current = head;
    while (current != nullptr) {
        std::cout << "Ma SV: " << current->maSV << ", Ten: " << current->ten << ", Diem: " << current->diem << std::endl;
        current = current->next;
    }
}

void inSinhVienDiemCaoNhat(SinhVien* head) {
    float maxDiem = -1;
    SinhVien* maxSV = nullptr;
    
    SinhVien* current = head;
    while (current != nullptr) {
        if (current->diem > maxDiem) {
            maxDiem = current->diem;
            maxSV = current;
        }
        current = current->next;
    }

    if (maxSV != nullptr) {
        std::cout << "Sinh vien co diem cao nhat:" << std::endl;
        std::cout << "Ma SV: " << maxSV->maSV << ", Ten: " << maxSV->ten << ", Diem: " << maxSV->diem << std::endl;
    }
}

SinhVien* timSinhVienTheoTen(SinhVien* head, const std::string& ten) {
    SinhVien* current = head;
    while (current != nullptr) {
        if (current->ten == ten) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

SinhVien* xoaSinhVienDiemThapNhat(SinhVien* head) {
    if (head == nullptr) {
        return nullptr;
    }
    
    SinhVien* current = head;
    SinhVien* prev = nullptr;
    SinhVien* minSV = head;
    float minDiem = head->diem;

    while (current != nullptr) {
        if (current->diem < minDiem) {
            minDiem = current->diem;
            minSV = current;
        }
        prev = current;
        current = current->next;
    }

    if (minSV == head) {
        head = head->next;
    } else {
        prev->next = minSV->next;
    }
    
    delete minSV;
    return head;
}

int main() {
    SinhVien* danhSach = nullptr;
    int n;
    std::cout << "Nhap so luong sinh vien: ";
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int maSV;
        std::string ten;
        float diem;
        std::cout << "Nhap thong tin sinh vien " << i + 1 << ":" << std::endl;
        std::cout << "Ma SV: ";
        std::cin >> maSV;
        std::cout << "Ten: ";
        std::cin.ignore();  // Clear newline character from previous input
        std::getline(std::cin, ten);
        std::cout << "Diem: ";
        std::cin >> diem;

        danhSach = themSinhVien(danhSach, maSV, ten, diem);
    }
    
    std::cout << "Danh sach sinh vien:" << std::endl;
    inDanhSach(danhSach);

    inSinhVienDiemCaoNhat(danhSach);

    std::string tenTimKiem;
    std::cout << "Nhap ten sinh vien can tim: ";
    std::cin.ignore();
    std::getline(std::cin, tenTimKiem);

    SinhVien* svCanTim = timSinhVienTheoTen(danhSach, tenTimKiem);
    if (svCanTim != nullptr) {
        std::cout << "Thong tin sinh vien can tim:" << std::endl;
        std::cout << "Ma SV: " << svCanTim->maSV << ", Ten: " << svCanTim->ten << ", Diem: " << svCanTim->diem << std::endl;
    } else {
        std::cout << "Khong tim thay sinh vien. Them sinh vien vao dau danh sach." << std::endl;
        danhSach = themSinhVien(danhSach, 0, tenTimKiem, 0.0f); // Them voi maSV = 0 va diem = 0
    }

    std::cout << "Danh sach sau khi them:" << std::endl;
    inDanhSach(danhSach);

    danhSach = xoaSinhVienDiemThapNhat(danhSach);
    std::cout << "Danh sach sau khi xoa sinh vien diem thap nhat:" << std::endl;
    inDanhSach(danhSach);

    // Gi?i phóng b? nh? c?a danh sách liên k?t
    while (danhSach != nullptr) {
        SinhVien* temp = danhSach;
        danhSach = danhSach->next;
        delete temp;
    }

    return 0;
}

