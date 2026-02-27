#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        taking_input(v, n);

        bool non_decreasing = true;

        for(int i = 0; i < n - 1; i++)
        {
            if(v[i] > v[i + 1])
            {
                non_decreasing = false;
                break;
            }
        }

        if(non_decreasing)
        {
            cout << n << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}
