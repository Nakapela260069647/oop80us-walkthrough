// Exercise 2 — integer division (SOLUTION)
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

    cout << "Integer division: " << (a / b) << endl;
    cout << "Real division: " << ((double)a / b) << endl;
    return 0;
}
