// Exercise 3 — swap with temp (SOLUTION)
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

    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
