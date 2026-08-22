// Exercise 3 — broken swap (STARTER)
#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // BUG: this does not swap
    a = b;
    b = a;

    // TODO: use a temporary variable:
    //   int temp = a;
    //   a = b;
    //   b = temp;
    // (Do this INSTEAD of the two lines above.)

    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
