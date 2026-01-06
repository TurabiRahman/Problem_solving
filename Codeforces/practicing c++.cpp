#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define input(a) int a; cin >> a;
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())
#define sub(s, l, len) ((s).substr((l), (len)))
#define endl "\n"

inline int countDigit(int n)
{
    if (n / 10 == 0) return 1;
    return 1 + countDigit(n / 10);
}

inline bool is_palindrome(string s)
{
    return s == string(s.rbegin(), s.rend());
}

signed main()
{
    input(t)

    int x = 1;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector <int> v1(n);
        vector <int> v2(m);

        for(int i = 0; i < n; i++) cin >> v1[i];
        for(int i = 0; i < m; i++) cin >> v2[i];

        vector <int> v11(10000);
        vector <int> v22(10000);

        for(int i = 0; i < n; i++)
        {
            v11[v1[i] - 0] =v11[v1[i] - 0]++;
        }

        for(int i = 0; i < m; i++)
        {
            v22[v2[i] - 0] =v22[v2[i] - 0]++;
        }
    }

    return 0;
}

