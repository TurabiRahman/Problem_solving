
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
    string str;
    cin >> str;

    int n = str.size();

    vector <int> v(n, 0);

    for(int i = 1; i < n; i++)
    {
        if(str[i] == str[i - 1])
        {
            v[i] = v[i - 1] + 1;
        }
        else
        {
            v[i] = v[i - 1];
        }
    }

    /*for(auto &a : v)
    {
        cout << a << " ";
    }

    cout << endl;*/

    int t;
    cin >> t;

    while(t--)
    {
        int l, r;
        cin >> l >> r;

        cout << v[r - 1] - v[l - 1] << endl;
    }

    return 0;
}

