// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    int nam_sinh, so_sinh_nhat;

    // Nhập năm sinh từ người dùng
    cout << "Nhap nam sinh cua nguoi do (1901-1999): ";
    cin >> nam_sinh;

    // Kiểm tra năm sinh hợp lệ
    if (nam_sinh < 1901 || nam_sinh > 1999) {
        cout << "Nam sinh khong hop le!";
        return 1;
    }

    // Tính số lần sinh nhật
    so_sinh_nhat = 1999 - nam_sinh;

    // Hiển thị kết quả
    cout << "So lan sinh nhat cua nguoi do den 31-12-1999 la: " << so_sinh_nhat << endl;

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
