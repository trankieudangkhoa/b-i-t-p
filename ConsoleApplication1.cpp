﻿// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 


bool kiemTraChiaHet(int a, int b) {
    // Kiểm tra nếu b không phải là số nguyên dương hoặc a không phải số nguyên dương
    if (b <= 0 || a < 0)
        return false;

    // Kiểm tra xem a có chia hết cho b không
    if (a % b == 0)
        return true;
    else
        return false;
}

int main() {
    int a, b;
    std::cout << "Nhap so nguyen duong a: ";
    std::cin >> a;
    std::cout << "Nhap so nguyen duong b: ";
    std::cin >> b;

    if (kiemTraChiaHet(a, b))
        std::cout << a << " chia het cho " << b << std::endl;
    else
        std::cout << a << " khong chia het cho " << b << std::endl;

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
