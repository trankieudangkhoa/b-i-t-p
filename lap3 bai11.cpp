﻿// lap3 bai11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Hàm tính giai thừa của một số nguyên dương
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;

    // Nhập số nguyên dương n từ người dùng
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n < 0) {
        cout << "Vui long nhap so nguyen duong." << endl;
    }
    else {
        // Tính giai thừa của n
        int fact = factorial(n);
        cout << "Giai thua cua " << n << " la: " << fact << endl;

        // Tìm số hàng chục và hàng trăm của giai thừa
        int hangTram = (fact / 100) % 10;
        int hangChuc = (fact / 10) % 10;

        cout << "So hang tram cua " << fact << " la: " << hangTram << endl;
        cout << "So hang chuc cua " << fact << " la: " << hangChuc << endl;
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
