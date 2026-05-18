#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<int> c(n);

        for(auto &x : c) {
            cin >> x;
        }

        int ones = 0;
        int base = 0;

        vector<int> multis;

        for(auto x : c) {

            if(x == 1) {
                ones++;
            }

            else {
                base += x;
                multis.push_back(x);
            }
        }

        int p = multis.size();

        int ans = 0;

        if(p == 0) {
            ans = 0;
        }

        else {

            int max_add = 0;

            if(p == 1) {
                max_add = multis[0] / 2;
            }

            else {

                int cap = 0;

                for(auto x : multis) {
                    cap += (x - 2) / 2;
                }

                max_add = cap;
            }

            max_add = min(max_add, ones);

            ans = base + max_add;

            if(ans < 3) {
                ans = 0;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
