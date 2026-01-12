#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define input(a) int a; cin >> a;
#define INPUT_int(a) int a; cin >> a;
#define INPUT_ARRAY(v,n) for(int i=0;i<(n);i++) cin>>(v)[i]
#define OUTPUT_ARRAY(v,n) for(int i=0;i<(n);i++) cout<<(v)[i]<<" "
#define pb push_back
#define newline cout << '\n';

void solve()
{
    INPUT_int(n);
    vi a(n);
    INPUT_ARRAY(a, n);

    INPUT_int(k);

    vi res;
    multiset<int> ms;

    for(int i = 0; i < n; i++)
    {
        ms.insert(a[i]);
        if(i >= k - 1)
        {
            res.pb(*ms.rbegin());
            ms.erase(ms.find(a[i - k + 1]));
        }
    }

    OUTPUT_ARRAY(res, res.size());
    newline;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
