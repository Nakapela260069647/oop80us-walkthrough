// Exercise 4 — = vs == (SOLUTION)
#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks == 50)
        cout << "Exactly fifty" << endl;
    else
        cout << "Not fifty" << endl;

    cout << "marks is still " << marks << endl;
    return 0;
}
