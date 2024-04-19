// lap3 bài9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

##include <iostream>

using namespace std;

// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
bool isPrime(int number) {
    if (number < 2)
        return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0)
            return false;
    }
    return true;
}

// Hàm tìm số nguyên tố thứ n
int findNthPrime(int n) {
    int count = 0;
    int number = 2; // Bắt đầu kiểm tra từ số nguyên tố đầu tiên là 2

    while (count < n) {
        if (isPrime(number)) {
            count++;
            if (count == n)
                return number;
        }
        number++;
    }
    return -1; // Trong trường hợp không tìm thấy số nguyên tố thứ n
}

int main() {
    int n;

    // Nhập số nguyên dương n từ người dùng
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong." << endl;
    }
    else {
        int nthPrime = findNthPrime(n);
        if (nthPrime != -1) {
            cout << "So nguyen to thu " << n << " la: " << nthPrime << endl;
        }
        else {
            cout << "Khong tim thay so nguyen to thu " << n << endl;
        }
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
