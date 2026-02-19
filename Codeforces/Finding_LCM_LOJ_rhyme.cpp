#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())
#define endl '\n'

const int MX = 200005;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> cnt(MX, 0), cntk(MX, 0);

    for(int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        cnt[l]++;
        cnt[r + 1]--;
    }

    for(int i = 1; i < MX; i++)
    {
        cnt[i] += cnt[i - 1];
        if(cnt[i] >= k) cntk[i] = 1;
    }

    for(int i = 1; i < MX; i++)
    {
        cntk[i] += cntk[i - 1];
    }

    while(q--)
    {
        int a, b;
        cin >> a >> b;
        output(cntk[b] - cntk[a - 1]);
    }

    return 0;
}
