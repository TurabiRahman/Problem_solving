
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
    int t;
    cin >> t;

    while(t--)
    {
        int n, u;
        cin >> n >> u;

        vector <int> v(n + 1, 0);

        for(int i = 0; i < u; i++)
        {
            int l, r, val;
            cin >> l >> r >> val;

            v[l] += val;
            v[r + 1] += -val;
        }

        /*for(auto & a : v)
        {
            cout << a << " ";
        }

        cout << endl;*/

        vector <int> result(n + 1);

        result[0] = v[0];

        for(int i = 1; i < n; i++)
        {
            result[i] = result[i - 1] + v[i];
        }

        /*for(auto & a : result)
        {
            cout << a << " ";
        }

        cout << endl;*/

        int q;
        cin >> q;

        while(q--)
        {
            int x;
            cin >> x;

            cout << result[x] << endl;
        }
    }

    return 0;
}


