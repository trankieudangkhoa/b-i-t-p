// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Hàm chuyển đổi từ mét sang inch
double met_to_inch(double meters) {
    return meters / 0.0254; // 1 inch = 0.0254 mét
}

// Hàm chuyển đổi từ inch sang mét
double inch_to_met(double inches) {
    return inches * 0.0254; // 1 inch = 0.0254 mét
}

int main() {
    double do_dai;
    char lua_chon;

    cout << "Chon lua chuyen doi: \n";
    cout << "a. Met sang inch\n";
    cout << "b. Inch sang met\n";
    cout << "Lua chon cua ban (a/b): ";
    cin >> lua_chon;

    if (lua_chon == 'a') {
        cout << "Nhap do dai trong met: ";
        cin >> do_dai;
        cout << "Do dai tuong ung trong inch la: " << met_to_inch(do_dai) << " inch\n";
    }
    else if (lua_chon == 'b') {
        cout << "Nhap do dai trong inch: ";
        cin >> do_dai;
        cout << "Do dai tuong ung trong met la: " << inch_to_met(do_dai) << " met\n";
    }
    else {
        cout << "Lua chon khong hop le!";
        return 1;
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
