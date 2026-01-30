#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        if (x < 10)
        {
            cout << x << endl;
        }
        else if (x > 45)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> digits;

            for(int i = 9; i >= 1; i--)
            {
                if (x >= i)
                {
                    digits.push_back(i);
                    x -= i;
                }
            }

            reverse(digits.begin(), digits.end());

            for(int i : digits)
            {
                cout << i;
            }

            cout << endl;
        }
    }

    return 0;
}
