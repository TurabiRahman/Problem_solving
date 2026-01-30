

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())
#define reverse_lr(v, l, r) reverse((v).begin() + (l), (v).begin() + (r) + 1)
#define fast ios::sync_with_stdio(false); cin.tie(NULL)

map <int, int> prime_factor(int n)
{
    map <int, int> mp;

    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            mp[i]++;

            n /= i;
        }
    }

    if(n > 1)
    {
        mp[n]++;
    }

    return mp;
}
signed main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        int a, b, l;
        cin >> a >> b >> l;

        int g = lcm(a, b);

        if(l % g != 0)
        {
            cout << "Case " << i << ": impossible" << endl;
        }
        else
        {
            map <int, int> mp_g = prime_factor(g);
            map <int, int> mp_l = prime_factor(l);

            int c = 1;

            for(auto &it : mp_l)
            {
                int f = it.first;
                int d = it.second;
                int e = mp_g[f];

                if(d > e)
                {
                    for(int j = 0; j < d - e; j++)
                    {
                        c *= f;
                    }
                }
            }

            cout << "Case " << i << ": " << c << endl;
        }
    }

    return 0;
}
