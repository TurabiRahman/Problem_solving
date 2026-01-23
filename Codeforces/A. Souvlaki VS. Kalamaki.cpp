
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
    input(t);

    while(t--)
    {
        input(n);

        vector <int> v(n);

        for(int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int flag = 1;

        for(int i = 1; i < n - 1; i += 2)
        {
            if(v[i] != v[i + 1])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
