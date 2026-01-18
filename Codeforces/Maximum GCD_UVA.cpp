
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
    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string s;
        getline(cin , s);

        stringstream ss(s);

        int x;
        vector <int> v;

        while(ss >> x)
        {
            v.push_back(x);
        }

        int maxi = 0;

        for(int i = 0; i < v.size(); i++)
        {
            for(int j = i + 1; j < v.size(); j++)
            {
                int z = __gcd(v[i], v[j]);
                maxi = max(maxi, z);
            }
        }

        cout << maxi << endl;
    }

    return 0;
}
