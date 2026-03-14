
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
        string n;

        getline(cin, n);

        while(n.empty())
        {
            getline(cin, n);
        }

        vector <int> v;
        vector <string> str;

        stringstream s1(n);

        int x;
        while(s1 >> x)
        {
            v.push_back(x);
        }

        getline(cin, n);
        string value;
        stringstream s2(n);

        while(s2 >> value)
        {
            str.push_back(value);
        }

        vector <pair <int, string>> vv;

        for(int i = 0; i < v.size(); i++)
        {
            vv.push_back({v[i], str[i]});
        }

        sort_asc(vv);

        for(auto &it : vv)
        {
            cout << it.second << endl;
        }

        if(t)
        {
            cout << endl;
        }

    }

    return 0;
}
