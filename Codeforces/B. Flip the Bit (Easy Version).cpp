
/*
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

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector <int> v(n);
        taking_input(v, n);

        int p;
        cin >> p;
        p--;

        int x = v[p];

        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(v[i] != x)
            {
                ans++;

                while(i < n && v[i] != x)
                {
                    i++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define fast ios::sync_with_stdio(false); cin.tie(NULL)

signed main()
{
    fast;

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        taking_input(v, n);

        int p;
        cin >> p;
        p--;

        int x = v[p];

        int L = 0, R = 0;

        for(int i = 0; i < p; i++)
        {
            if(v[i] != x)
            {
                L++;
                while(i < p && v[i] != x)
                    i++;
            }
        }

        for(int i = p + 1; i < n; i++)
        {
            if(v[i] != x)
            {
                R++;
                while(i < n && v[i] != x)
                    i++;
            }
        }

        cout << 2 * max(L, R) << endl;
    }

    return 0;
}
