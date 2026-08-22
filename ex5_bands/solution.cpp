// Exercise 5 — bands + AND (SOLUTION)
#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 80)
        cout << "Band: A" << endl;
    else if (marks >= 70)
        cout << "Band: B" << endl;
    else if (marks >= 50)
        cout << "Band: C" << endl;
    else
        cout << "Band: F" << endl;

    int hasID;
    cout << "Has ID? (1=yes 0=no): ";
    cin >> hasID;

    if (marks >= 50 && hasID == 1)
        cout << "Eligible" << endl;
    else
        cout << "Not eligible" << endl;

    return 0;
}
