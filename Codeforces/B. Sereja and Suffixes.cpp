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
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    taking_input(v, n);

    vector<int> suffix(n);
    set<int> s;

    for(int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        suffix[i] = s.size();
    }

    while(m--)
    {
        int l;
        cin >> l;
        output(suffix[l - 1]);
    }

    return 0;
}
