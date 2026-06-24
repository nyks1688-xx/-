#include <iostream>
using namespace std;

int main() {
    int a, P, S;

    cout << "Введите число a: ";
    cin >> a;

    P = 4 * a;
    S = a * a;

    if (P > S) {
        cout << "Периметр больше площади";
    }
    else {
        cout << "Площадь больше периметра";
    }

    return 0;
}
