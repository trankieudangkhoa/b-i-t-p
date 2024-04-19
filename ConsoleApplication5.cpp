// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <io.h>
#include <fcntl.h>


using namespace std;

// Tính khoảng cách giữa hai điểm (x1, y1) và (x2, y2)
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    
    // Nhập thông tin của đường tròn thứ nhất
    double x1, y1, r1;
    wcout << "Nhập tọa độ tâm của đường tròn thứ nhất (x1, y1): ";
    wcin >> x1 >> y1;
    wcout << "Nhập bán kính của đường tròn thứ nhất (r1): ";
    wcin >> r1;

    // Nhập thông tin của đường tròn thứ hai
    double x2, y2, r2;
    wcout << "Nhập tọa độ tâm của đường tròn thứ hai (x2, y2): ";
    wcin >> x2 >> y2;
    wcout << "Nhập bán kính của đường tròn thứ hai (r2): ";
    wcin >> r2;

    // Tính khoảng cách giữa tâm của hai đường tròn
    double d = distance(x1, y1, x2, y2);

    // Tính tổng bán kính
    double sumOfRadii = r1 + r2;

    // Trường hợp đường tròn không cắt nhau
    if (d > sumOfRadii) {
        wcout << "Hai đường tròn không cắt nhau." << endl;
    }
    // Trường hợp một đường tròn nằm trong đường tròn khác
    else if (d + min(r1, r2) < max(r1, r2)) {
        wcout << "Một đường tròn nằm trong đường tròn khác." << endl;
    }
    // Trường hợp hai đường tròn cắt nhau tại một điểm
    else if (d == sumOfRadii) {
        wcout << "Hai đường tròn cắt nhau tại một điểm." << endl;
    }
    // Trường hợp hai đường tròn cắt nhau tại hai điểm
    else {
        wcout << "Hai đường tròn cắt nhau tại hai điểm." << endl;
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
