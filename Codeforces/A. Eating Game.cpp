#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_asc(v) sort((v).begin(), (v).end())
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        taking_input(v, n);

        int mx = *max_element(v.begin(), v.end());

        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] == mx)
                cnt++;
        }

        output(cnt);
    }

    return 0;
}
