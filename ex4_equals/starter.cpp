// Exercise 4 — = vs == (STARTER — has the bug)
#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    // BUG: = writes 50 into marks. Use == to ASK.
    if (marks >= 50)
    {
        cout << "Exactly fifty" << endl;
    }
    else
    {cout << "Not fifty" << endl;
        
    }

    cout << "marks is still " << marks << endl;
    return 0;
}
