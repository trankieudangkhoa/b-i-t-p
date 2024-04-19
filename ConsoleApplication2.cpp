// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// Hàm kiểm tra kết quả của trò chơi
void kiemTraKetQua(string player1, string player2) {
    if (player1 == player2) {
        cout << "Hai nguoi choi hoa nhau." << endl;
    }
    else if (
        (player1 == "keo" && player2 == "bao") ||
        (player1 == "bao" && player2 == "bua") ||
        (player1 == "bua" && player2 == "keo")
        ) {
        cout << "Nguoi choi 1 thang." << endl;
    }
    else {
        cout << "Nguoi choi 2 thang." << endl;
    }
}

int main() {
    string player1, player2;

    cout << "Nhap lua chon cua nguoi choi 1 (keo, bua, bao): ";
    cin >> player1;

    cout << "Nhap lua chon cua nguoi choi 2 (keo, bua, bao): ";
    cin >> player2;

    // Chuyển các lựa chọn của người chơi thành chữ thường để dễ so sánh
    for (char& c : player1) {
        c = tolower(c);
    }

    for (char& c : player2) {
        c = tolower(c);
    }

    // Kiểm tra kết quả của trò chơi
    kiemTraKetQua(player1, player2);

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
