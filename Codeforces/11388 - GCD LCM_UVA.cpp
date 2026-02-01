
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())
#define reverse_lr(v, l, r) reverse((v).begin() + (l), (v).begin() + (r) + 1)
#define fast ios::sync_with_stdio(false); cin.tie(NULL)


inline int countDigit(int n)
{
    if (n / 10 == 0) return 1;

    return 1 + countDigit(n / 10);
}
vector <int> prime_factor(int n)
{
    vector <int> v;

    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
    }

    if(n > 1)
    {
        v.push_back(n);
    }

    return v;
}

signed main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int g, l;
        cin >> g >> l;

        if(l % g != 0)
        {
            cout << -1 << endl;

            continue;
        }

        int n = l /g;

        int a, b;

        for(int i = 1; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                int j = n / i;

                if(__gcd(i, j) == 1)
                {
                    a = g * i;
                    b = g * j;

                    break;
                }
            }
        }

        cout << a << " " << b << endl;
    }

    return 0;
}


