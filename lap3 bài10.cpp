// lap3 bài10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Hàm phân tích số nguyên thành tích các thừa số nguyên tố
void primeFactorization(int n) {
    cout << "Phan tich " << n << " thanh tich cac thua so nguyen to la: ";

    // Lặp qua tất cả các số từ 2 đến căn bậc hai của n
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) { // Kiểm tra i có phải là thừa số nguyên tố của n không
            cout << i << " ";
            n /= i; // Chia n cho i để tiếp tục kiểm tra các thừa số nguyên tố tiếp theo của n
        }
    }

    // Nếu n sau vòng lặp vẫn lớn hơn 1, nó chính là một thừa số nguyên tố
    if (n > 1) {
        cout << n;
    }

    cout << endl;
}

int main() {
    int number;

    // Nhập số nguyên dương từ người dùng
    cout << "Nhap so nguyen duong can phan tich: ";
    cin >> number;

    // Kiểm tra và phân tích số nguyên thành tích các thừa số nguyên tố
    if (number <= 0) {
        cout << "Vui long nhap so nguyen duong." << endl;
    }
    else {
        primeFactorization(number);
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
