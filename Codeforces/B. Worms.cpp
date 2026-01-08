
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

    vector <int> v1;

    for(int i = 0; i < n; i++)
    {
        int t = v[i];

        while(t--)
        {
            v1.push_back(i + 1);
        }
    }

    int y;
    cin >> y;

    for(int i = 0; i < y; i++)
    {
        int a;
        cin >> a;

        cout << v1[a - 1] << endl;
    }

    return 0;
}

