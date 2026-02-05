

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

vector <int> prefix_sum(vector <int> v, int n)
{
    vector <int> ps(n);

    ps[0] = v[0];

    for(int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + v[i];
    }

    return ps;
}

signed main()
{
    int t;
    cin >> t;

    vector <int> v(t);
    taking_input(v, t);

    vector <int> ps = prefix_sum(v, t);

    int n;
    cin >> n;

    while(n--)
    {
        int i, j;
        cin >> i >> j;

        if(i == 0)
        {
            cout << ps[j] << endl;
        }
        else
        {
            cout << ps[j] - ps[i - 1] << endl;
        }
    }

    return 0;
}

