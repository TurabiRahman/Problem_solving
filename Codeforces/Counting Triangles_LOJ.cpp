
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl
#define sort_asc(v) sort((v).begin(), (v).end())

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        taking_input(v, n);

        sort_asc(v);

        int ans = 0;

        for(int k = 2; k < n; k++)
        {
            int l = 0;
            int r = k - 1;

            while(l < r)
            {
                if(v[l] + v[r] > v[k])
                {
                    ans += (r - l);
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }

        cout << "Case " << tc << ": " << ans << endl;
    }
}
