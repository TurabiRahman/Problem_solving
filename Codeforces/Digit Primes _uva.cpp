
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())
#define reverse_lr(v, l, r) reverse((v).begin() + (l), (v).begin() + (r) + 1)
#define fast ios::sync_with_stdio(false); cin.tie(NULL)


int sumOfDigits(int n)
{
    if(n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

vector <int> sieve(int n)
{
    vector <bool> v(n, true);

    v[0] = false;
    v[1] = false;

    for(int i = 2; i * i <= n; i++)
    {
        if(v[i] == true)
        {
            for(int j = i * i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }

    vector <int> res;

    for(int i = 2; i <= n; i++)
    {
        if(v[i] == true)
        {
            res.push_back(i);
        }
    }

    vector <int> final;

    for(int i = 5; i <= n; i++)
    {
        int x;
        x = sumOfDigits(res[i]);

        for(int j = 0; j <= res[i]; j++)
        {
            if(x == res[j])
            {
                final.push_back(res[i]);
            }
        }
    }

    return final;
}


signed main()
{
    int t;
    cin >> t;

    vector <int> v = sieve(1000000);

    while(t--)
    {
        int s, e;
        cin >> s >> e;

        int count = 0;

        for(int i = 0; i < )
    }

    return 0;
}


