
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
signed main()
{
    fast;

    int n, k, q;
    cin >> n >> k >> q;

    unordered_map <int, int> mp;

    while(n--)
    {
        int a, b;

        cin >> a >> b;

        for(int i = a; i <= b; i++)
        {
            mp[i]++;
        }
    }

    /*for(auto &it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }*/

    for(int i = 0; i < q; i++)
    {
        int c, d;
        cin >> c >> d;

        int count = 0;

        for(int i = c; i <= d; i++)
        {
            if(mp[i] >= k)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}


