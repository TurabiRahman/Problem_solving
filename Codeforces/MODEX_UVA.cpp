#include <bits/stdc++.h>
using namespace std;

#define int long long

int mod_exp(int x, int y, int n)
{
    int result = 1;
    int base = x % n;

    while(y > 0)
    {
        if(y % 2 == 1)
        {
            result = (result * base) % n;
        }

        base = (base * base) % n;

        y /= 2;
    }

    return result;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c;

    while (cin >> c && c != 0)
    {
        while (c--)
        {
            int x, y, n;
            cin >> x >> y >> n;

            cout << mod_exp(x, y, n) << "\n";
        }
    }

    return 0;
}
