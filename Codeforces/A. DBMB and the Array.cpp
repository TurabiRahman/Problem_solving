
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
        int n, s, x;
        cin >> n >> s >> x;

        vector <int> v;
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            v.push_back(x);

            sum += x;
        }

        if(sum > s)
        {
            cout << "NO" << endl;
        }
        else if(sum == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            int z = s - sum;
            z = z % x;

            if(z == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }


    return 0;
}
