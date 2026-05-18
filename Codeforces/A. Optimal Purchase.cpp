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
    if(n / 10 == 0) return 1;

    return 1 + countDigit(n / 10);
}

signed main()
{
    fast;

    int t;
    cin >> t;

    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int x = n / 3;
        int y = n % 3;

        int result = 0;

        result += x * min(3 * a, b);

        result += min(y * a, b);

        cout << result << endl;
    }

    return 0;
}
