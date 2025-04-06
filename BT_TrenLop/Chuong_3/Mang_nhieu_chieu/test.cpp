#include <iostream>

const int ROWS = 3;
const int COLS = 3;

// Hàm nhập mảng 2 chiều với tham chiếu
void input2DArray(int (&arr)[ROWS][COLS]) {
    std::cout << "Nhap cac phan tu cua mang 2 chieu " << ROWS << "x" << COLS << ":\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << "Nhap phan tu thu [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }
}

// Hàm in mảng 2 chiều
void print2DArray(const int (&arr)[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int myArray[ROWS][COLS];

    input2DArray(myArray);

    std::cout << "Mang sau khi nhap:\n";
    print2DArray(myArray);

    return 0;
}
