// lap3 bài8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Hàm tính tổng các nghịch đảo của bình phương tất cả các số tự nhiên từ 1 đến N
double sumOfInverseSquares(int N) {
    double sum = 0.0;
    for (int i = 1; i <= N; ++i) {
        sum += 1.0 / (i * i);
    }
    return sum;
}

int main() {
    int N;

    // Nhập số nguyên dương N từ người dùng
    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    // Kiểm tra và tính tổng các nghịch đảo của bình phương từ 1 đến N
    if (N <= 0) {
        cout << "N phai la so nguyen duong." << endl;
    }
    else {
        double S = sumOfInverseSquares(N);
        cout << "Tong cac nghich dao binh phuong tu 1 den N la: " << S << endl;
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
