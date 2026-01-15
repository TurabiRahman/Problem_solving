#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int res = n % 3;

        if(res == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 3 - res << endl;
        }
    }

    return 0;
}
