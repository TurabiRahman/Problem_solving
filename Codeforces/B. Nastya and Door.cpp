
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        taking_input(v, n);

        vector<int> v1(n, 0);

        for(int i = 1; i < n - 1; i++)
        {
            if(v[i] > v[i-1] && v[i] > v[i+1])
            {
                v1[i] = 1;
            }
        }

        int peaks = 0;

        for(int i = 1; i <= k-2; i++)
        {
            peaks += v1[i];
        }

        int best_peaks = peaks;
        int best_l = 0;

        for(int l = 1; l <= n - k; l++)
        {
            peaks -= v1[l];
            peaks += v1[l + k - 2];

            if(peaks > best_peaks)
            {
                best_peaks = peaks;
                best_l = l;
            }
        }

        cout << best_peaks + 1 << " " << best_l + 1 << endl;
    }
}
