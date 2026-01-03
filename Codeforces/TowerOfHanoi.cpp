#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char A, char C, char B)
{
    if(n == 1)
    {
        cout << "Move the disk from <> " << A << " to " << B << endl;
        return;
    }
    else
    {
        hanoi(n - 1, A, B, C);
        hanoi(1, A, C, B);
        hanoi(n - 1, B, C, A);
    }
}

int main()
{
    int n;
    cin >> n;

    hanoi(n, 'A', 'B', 'C');

    return 0;
}
