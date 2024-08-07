#include <iostream>

using namespace std;

// Hàm đệ quy và khử đệ quy cho S(n) = 1/2 + 2/3 + ... + n/(n+1)
double S2_dequy(int n) {
    if (n == 1) return 1.0 / 2;
    return (double)n / (n + 1) + S2_dequy(n - 1);
}

double S2_khudequy(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (double)i / (i + 1);
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "S2 de quy: " << S2_dequy(n) << endl;
    cout << "S2 khu de quy: " << S2_khudequy(n) << endl;

    return 0;
}
