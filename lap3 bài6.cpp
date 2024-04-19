﻿// lap3 bài6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Hàm tính tổng các ước số của N (không kể 1 và N)
int sumOfDivisors(int N) {
    int sum = 0;
    for (int i = 2; i <= N / 2; ++i) {
        if (N % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int N;

    // Nhập số nguyên dương N từ người dùng
    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    // Kiểm tra và tính tổng các ước số của N
    if (N <= 0) {
        cout << "N phai la so nguyen duong." << endl;
    }
    else {
        int sum = sumOfDivisors(N);
        cout << "Tong cac uoc so cua " << N << " (khong ke 1 va " << N << ") la: " << sum << endl;
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
