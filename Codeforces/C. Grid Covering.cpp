#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll x, ll y)
{
    while(y != 0)
    {
        ll t = y;
        y = x % y;
        x = t;
    }

    return x;
}

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;

        ll g1 = gcd(a, n);
        ll g2 = gcd(b, m);
        ll d = gcd(n, m);

        if(g1 == 1 && g2 == 1 && d <= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
