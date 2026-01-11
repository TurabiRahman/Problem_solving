#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define input(a) int a; cin >> a;
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())

inline int countDigit(int n)
{
    if (n / 10 == 0) return 1;

    return 1 + countDigit(n / 10);
}
signed main()
{
    int l, t;
    cin >> l >> t;

    set <int> s;
    s.insert(0);
    s.insert(l);

    while(t--)
    {
        int c, x;
        cin >> c >> x;

        if(c == 1)
        {
            s.insert(x);
        }
        else
        {
            auto it = s.lower_bound(x);
            int right = *it;

            it--;
            int left = *it;

            cout << right - left << endl;
        }
    }

    return 0;
}
