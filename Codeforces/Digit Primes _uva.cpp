
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

vector<bool> sieve(int n)
{
    vector<bool> v(n + 1, true);

    v[0] = false;
    v[1] = false;

    for(int i = 2; i * i <= n; i++)
    {
        if(v[i])
        {
            for(int j = i * i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }

    return v;
}

signed main()
{
    int limit = 1000000;

    vector<bool> prime = sieve(limit);

    vector<int> prefix(limit + 1, 0);

    for(int i = 1; i <= limit; i++)
    {
        prefix[i] = prefix[i-1];

        if(prime[i])
        {
            int x = sumOfDigits(i);

            if(prime[x])
            {
                prefix[i]++;
            }
        }
    }

    int t;
    cin >> t;

    while(t--)
    {
        int l,r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l-1] << endl;
    }

    return 0;
}
