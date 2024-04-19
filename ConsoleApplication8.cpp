// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

// Hàm kiểm tra vị trí của điểm A so với đường tròn
// Trả về 1 nếu A nằm trên đường tròn, 0 nếu A nằm trong đường tròn, và -1 nếu A nằm ngoài đường tròn
int checkPosition(int x0, int y0, int R, int x, int y) {
    // Tính khoảng cách từ tâm đến điểm A
    double distance = sqrt(pow(x - x0, 2) + pow(y - y0, 2));

    // So sánh khoảng cách với bán kính R
    if (distance == R) {
        return 1; // A nằm trên đường tròn
    }
    else if (distance < R) {
        return 0; // A nằm trong đường tròn
    }
    else {
        return -1; // A nằm ngoài đường tròn
    }
}

int main() {
    int x0, y0, R, x, y;

    // Nhập tọa độ tâm và bán kính của đường tròn
    cout << "Nhap toa do tam O(x0, y0): ";
    cin >> x0 >> y0;
    cout << "Nhap ban kinh R: ";
    cin >> R;

    // Nhập tọa độ điểm A
    cout << "Nhap toa do diem A(x, y): ";
    cin >> x >> y;

    // Kiểm tra vị trí của điểm A
    int position = checkPosition(x0, y0, R, x, y);

    // In kết quả
    if (position == 1) {
        cout << "Diem A nam tren duong tron." << endl;
    }
    else if (position == 0) {
        cout << "Diem A nam trong duong tron." << endl;
    }
    else {
        cout << "Diem A nam ngoai duong tron." << endl;
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
