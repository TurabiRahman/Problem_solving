

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
    if (n / 10 == 0) return 1;

    return 1 + countDigit(n / 10);
}
signed main()
{
    int n;
    cin >> n;

    vector <int> v(n);
    taking_input(v, n);

    int q;
    cin >> q;

    while(q--)
    {
        int h;
        cin >> h;

        auto short_gf = lower_bound(v.begin(), v.end(), h);
        auto long_gf = upper_bound(v.begin(), v.end(), h);

        if(short_gf == v.begin())
        {
            cout << "X ";
        }
        else
        {
            cout << *(short_gf - 1) << " ";
        }

        if(long_gf == v.end())
        {
            cout << "X";
        }
        else
        {
            cout << *long_gf;
        }

        cout << endl;
    }

    return 0;
}
