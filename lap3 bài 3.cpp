#include <iostream>

using namespace std;

// Hàm tính tổng S theo công thức đã cho
double calculateSum(int N) {
    double S = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0) {
            S -= 1.0 / i;
        }
        else {
            S += 1.0 / i;
        }
    }
    return S;
}

int main() {
    int N;

    // Nhập số nguyên dương N từ người dùng
    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    // Kiểm tra và tính tổng S
    if (N <= 0) {
        cout << "N phai la so nguyen duong." << endl;
    }
    else {
        double S = calculateSum(N);
        cout << "Tong S la: " << S << endl;
    }

    return 0;
}

