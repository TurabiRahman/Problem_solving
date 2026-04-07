#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    // First 11 primes
    vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31};

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        taking_input(a, n);

        vector<int> color(n);

        map<int,int> mp; // prime -> color
        int current_color = 1;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < 11; j++)
            {
                if(a[i] % primes[j] == 0)
                {
                    // if this prime hasn't been assigned a color yet
                    if(mp[primes[j]] == 0)
                    {
                        mp[primes[j]] = current_color;
                        current_color++;
                    }

                    color[i] = mp[primes[j]];
                    break; // VERY IMPORTANT
                }
            }
        }

        cout << current_color - 1 << "\n";

        for(int i = 0; i < n; i++)
            cout << color[i] << " ";
        cout << "\n";
    }

    return 0;
}
