#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Numbers in ascending order: ";

    if (a <= b && a <= c) {
        if (b <= c)
            cout << a << ", " << b << ", " << c;
        else
            cout << a << ", " << c << ", " << b;
    }
    else if (b <= a && b <= c) {
        if (a <= c)
            cout << b << ", " << a << ", " << c;
        else
            cout << b << ", " << c << ", " << a;
    }
    else {
        if (a <= b)
            cout << c << ", " << a << ", " << b;
        else
            cout << c << ", " << b << ", " << a;
    }

    cout << endl;
    return 0;
}
