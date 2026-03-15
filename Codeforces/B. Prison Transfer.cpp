#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, c;
    cin >> n >> t >> c;

    vector <int> v(n);
    taking_input(v, n);

    int len = 0;
    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        if(v[i] <= t)
        {
            len++;
        }
        else
        {
            if(len >= c)
                ans += len - c + 1;

            len = 0;
        }
    }

    if(len >= c)
        ans += len - c + 1;

    cout << ans << endl;
}

