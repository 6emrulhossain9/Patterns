#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int comb(int n, int k) {
    return fact(n) / (fact(k) * fact(n - k));
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << comb(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
