

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

    vector <int> v1(n, abs(v[0]));

    for(int i = 1; i < n; i++)
    {
        if(v[i] != v[i - 1])
        {
            v1[i] = v1[i - 1] + abs(v[i] - v[i - 1]);
        }
        else
        {
            v1[i] = v1[i - 1];
        }
    }

    /*for(auto &a : v1)
    {
        cout << a << " ";
    }

    cout << endl;*/

    cout << v1[n - 1] << endl;

    return 0;
}

