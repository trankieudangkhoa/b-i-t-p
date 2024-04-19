// lap3 bài 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) {
        return false; // Số nhỏ hơn hoặc bằng 1 không phải là số nguyên tố
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false; // Số có ước khác 1 và chính nó, không phải là số nguyên tố
        }
    }
    return true; // Nếu không có ước nào khác 1 và chính nó, nó là số nguyên tố
}

int main() {
    int n;

    // Nhập số nguyên từ người dùng
    cout << "Nhap so nguyen n: ";
    cin >> n;

    // Kiểm tra và in ra kết quả
    if (isPrime(n)) {
        cout << n << " la so nguyen to." << endl;
    }
    else {
        cout << n << " khong phai la so nguyen to." << endl;
    }

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
