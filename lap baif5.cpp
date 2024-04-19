// lap baif5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Hàm tính ước số chung lớn nhất của hai số
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Hàm kiểm tra xem m và n có phải là hai số nguyên tố cùng nhau hay không
bool areCoprime(int m, int n) {
    return gcd(m, n) == 1;
}

int main() {
    int m, n;
    std::cout << "Nhập vào hai số nguyên dương m và n: ";
    std::cin >> m >> n;

    if (areCoprime(m, n)) {
        std::cout << m << " và " << n << " là hai số nguyên tố cùng nhau.\n";
    }
    else {
        std::cout << m << " và " << n << " không phải là hai số nguyên tố cùng nhau.\n";
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
