// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

// Hàm kiểm tra tam giác cân
bool isIsosceles(int a, int b, int c) {
    return (a == b) || (a == c) || (b == c);
}

// Hàm kiểm tra tam giác đều
bool isEquilateral(int a, int b, int c) {
    return (a == b) && (a == c);
}

// Hàm kiểm tra tam giác vuông
bool isRightAngle(int a, int b, int c) {
    return (pow(a, 2) == pow(b, 2) + pow(c, 2)) ||
        (pow(b, 2) == pow(a, 2) + pow(c, 2)) ||
        (pow(c, 2) == pow(a, 2) + pow(b, 2));
}

// Hàm kiểm tra tam giác vuông cân
bool isRightIsosceles(int a, int b, int c) {
    return isIsosceles(a, b, c) && isRightAngle(a, b, c);
}

int main() {
    int a, b, c;

    // Nhập độ dài các cạnh
    cout << "Nhap do dai 3 canh cua tam giac: ";
    cin >> a >> b >> c;

    // Kiểm tra loại tam giác
    if (isEquilateral(a, b, c)) {
        cout << "Day la tam giac deu." << endl;
    }
    else if (isIsosceles(a, b, c)) {
        if (isRightIsosceles(a, b, c)) {
            cout << "Day la tam giac vuong can." << endl;
        }
        else {
            cout << "Day la tam giac can." << endl;
        }
    }
    else if (isRightAngle(a, b, c)) {
        cout << "Day la tam giac vuong." << endl;
    }
    else {
        cout << "Day la tam giac thuong." << endl;
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
