// lap3 bài 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Hàm tính luỹ thừa a^n
int power(int a, int n) {
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= a;
    }
    return result;
}

int main() {
    int a, n;
    cout << "Nhap vao so nguyen duong a: ";
    cin >> a;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    // Kiểm tra n có là số âm không
    if (n < 0) {
        cout << "Khong tinh duoc luong thua cua so am!" << endl;
        return 1; // Trả về lỗi
    }

    int result = power(a, n);
    cout << a << " mu " << n << " la: " << result << endl;

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
