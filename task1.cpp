#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a < b && a > c))
        cout << "The middle number is: " << a;
    else if ((b > a && b < c) || (b < a && b > c))
        cout << "The middle number is: " << b;
    else
        cout << "The middle number is: " << c;

    return 0;
}
