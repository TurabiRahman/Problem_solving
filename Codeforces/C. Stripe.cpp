
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())
#define reverse_lr(v, l, r) reverse((v).begin() + (l), (v).begin() + (r) + 1)
#define fast ios::sync_with_stdio(false); cin.tie(NULL)


inline int countDigit(int n)
{
    if (n / 10 == 0) return 1;

    return 1 + countDigit(n / 10);
}
signed main()
{
    int n;
    cin >> n;

    vector <int> v(n);
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    if(sum % 2 != 0)
    {
        cout << 0 << endl;
        return 0;
    }

    int target = sum / 2;
    int prefix_sum = 0;
    int count = 0;

    for(int i = 0; i < n - 1; i++)
    {
        prefix_sum += v[i];

        if(prefix_sum == target)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}


