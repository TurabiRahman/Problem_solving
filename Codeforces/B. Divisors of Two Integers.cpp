
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
    int n;
    cin >> n;

    vector <int> v(n);

    taking_input(v, n);
    sort_dec(v);

    int x = v[0];
    int z = -1;

    for(int i = 0; i < n; i++)
    {
        if(v[i] != z && x % v[i] == 0)
        {
            z = v[i];
            v[i] = -1;
        }
    }

    sort_dec(v);

    int y = v[0];

    cout << x << " " << y << endl;

    return 0;
}
