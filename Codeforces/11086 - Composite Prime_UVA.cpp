

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())
#define reverse_lr(v, l, r) reverse((v).begin() + (l), (v).begin() + (r) + 1)
#define fast ios::sync_with_stdio(false); cin.tie(NULL)

bool prime_factors(int n)
{
    if(n < 4)
    {
        return false;
    }

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

    if(v.size() == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
signed main()
{
    int t;

    while(cin >> t)
    {
        int count = 0;

        for(int i = 0; i < t; i++)
        {
            int x;
            cin >> x;

            if(prime_factors(x))
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
