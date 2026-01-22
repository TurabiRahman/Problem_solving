
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

        vector <int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int maxi = v[0];
        int count = 0;

        for(int i = 1; i < n; i++)
        {
            if(v[i] < maxi)
            {
                count++;
            }
            else
            {
                maxi = v[i];
            }
        }

        cout << count << endl;
    }


    return 0;
}
