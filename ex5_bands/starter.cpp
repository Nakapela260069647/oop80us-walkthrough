// Exercise 5 — bands + AND (STARTER)
#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    // TODO: finish the chain. First true condition wins.
    if (marks >= 80)
        cout << "Band: A" << endl;
    // TODO: else if marks >= 70 → Band: B
    // TODO: else if marks >= 50 → Band: C
    // TODO: else → Band: F

    int hasID;
    cout << "Has ID? (1=yes 0=no): ";
    cin >> hasID;

    // TODO: if marks >= 50 AND hasID == 1 print Eligible
    //       else print Not eligible
    // Hint: &&

    return 0;
}
