

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

    while(t--)
    {
        int n;
        cin >> n;

        map <int, int> mp;

        for(int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            if(a <= 10)
            {
                mp.insert({b, i + 1});
            }
        }

        /*for(auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << (*it).first << " " << (*it).second << endl;
        }*/

        auto it = mp.end();
        it--;

        cout << (*it).second << endl;
    }

    return 0;
}
