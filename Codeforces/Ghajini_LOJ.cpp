

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
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);


    int t;
    cin >> t;

    int tc = 1;

    while(t--)
    {
        int n, d;
        cin >> n >> d;

        vector<int> v(n);
        taking_input(v, n);

        deque<int> mn, mx;
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            while(!mn.empty() && mn.front() < i - d) mn.pop_front();
            while(!mx.empty() && mx.front() < i - d) mx.pop_front();

            while(!mn.empty() && v[mn.back()] >= v[i])
                mn.pop_back();
            mn.push_back(i);

            while(!mx.empty() && v[mx.back()] <= v[i])
                mx.pop_back();
            mx.push_back(i);

            ans = max(ans, v[mx.front()] - v[mn.front()]);
        }

        cout << "Case " << tc << ": " << ans << "\n";
        tc++;
    }

    return 0;
}
