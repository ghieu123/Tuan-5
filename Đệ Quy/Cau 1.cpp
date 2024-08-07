#include <iostream>

using namespace std;

// Hàm đệ quy và khử đệ quy cho S(n) = 1 + 2 + 3 + ... + n
int S1_dequy(int n) {
    if (n == 1) return 1;
    return n + S1_dequy(n - 1);
}

int S1_khudequy(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "S1 de quy: " << S1_dequy(n) << endl;
    cout << "S1 khu de quy: " << S1_khudequy(n) << endl;

    return 0;
}
