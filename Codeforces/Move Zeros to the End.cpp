#include <bits/stdc++.h>
using namespace std;

#define int long long
#define input(a) int a; cin >> a;
#define output(a) cout << (a) << endl;
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())

void solve()
{
    int n;
    cin >> n;

    vector <int> v(n);
    taking_input(v, n);

    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] != 0)
        {
            v[flag++] = v[i];
        }
    }


    for(int i = flag; i < n; i++)
        v[i] = 0;

    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
/*signed main()
{
    int n;
    cin >> n;

    deque <int> dq;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(x != 0)
        {
            dq.push_back(x);
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(dq.empty())
        {
            cout << "0 ";
        }
        else
        {
            int z;
            z = dq.front();
            dq.pop_front();

            cout << z << " ";
        }
    }

    cout << endl;

    return 0;
}

*/
