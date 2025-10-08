#include <iostream>
using namespace std;

void factoriPrimi(int n) {
    for (int d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            cout << d << " ";
            n /= d;
        }
    }
    if (n > 1) cout << n;
}

int main() {
    int n;
    cout << "Introduceti n: ";
    cin >> n;

    cout << "Factorii primi ai lui " << n << " sunt: ";
    factoriPrimi(n);
    cout << endl;

    return 0;
}
