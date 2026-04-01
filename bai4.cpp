#include <iostream>
using namespace std;

long long power(int x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / power(x, -n);
    return x * power(x, n - 1);
}

int main() {
    int x, n;
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap n: "; cin >> n;
    cout << x << "^" << n << " = " << power(x, n) << endl;
    return 0;
}
