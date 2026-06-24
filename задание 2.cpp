#include <iostream>
using namespace std;

int main() {
    double a, q, sum = 0;
    int n;

    cin >> a >> q >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + a;
        a = a * q;
    }

    cout << sum;

    return 0;
}
