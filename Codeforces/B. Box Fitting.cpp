/*
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
        int n, w;
        cin >> n >> w;

        vector <int> v(n);
        taking_input(v, n);
        sort_dec(v);

        int count = 0;

        for(int i = 0; i < n; i++)
        {
            int flag = 0;
            for(int j = 0; j < n; i++)
            {
                if(v[j]!= -1)
                {
                    flag = 1;
                }
            }

            if(flag == 0)
            {
                break;
            }
            else
            {
                int z = w;

                for(int j = 0; j < n; j++)
                {
                    if(z >= v[i] && v[i] != -1)
                    {
                        z = z - v[i];
                        v[i] = -1;
                    }
                }

                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        long long W;
        cin >> n >> W;

        vector<long long> v(n);

        for(auto &x : v) cin >> x;

        sort(v.rbegin(), v.rend());

        int height = 0;
        vector <bool> used(n, false);
        int left = n;

        while(left > 0)
        {
            long long space = W;

            for(int i = 0; i < n; i++)
            {
                if(!used[i] && v[i] <= space)
                {
                    space -= v[i];
                    used[i] = true;
                    left--;
                }
            }

            height++;
        }

        cout << height << "\n";
    }
}
