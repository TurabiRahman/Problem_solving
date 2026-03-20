#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector <int> v(n);
    taking_input(v, n);

    while(q--)
    {
        int x;
        cin >> x;

        int l = 0, r = n - 1;
        int ans = -1;

        while(l <= r)
        {
            int mid = (l + r) / 2;

            if(v[mid] == x)
            {
                ans = mid;
                r = mid - 1;
            }
            else if(v[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
