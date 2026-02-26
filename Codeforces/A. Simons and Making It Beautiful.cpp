#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())

void soln() {

    int n;
    cin >> n;

    vector<int> p(n);
    taking_input(p, n);

    int pos = -1;

    for(int i = 0; i < n; i++)
    {
        if(p[i] == n)
        {
            pos = i;
            break;
        }
    }


    if(pos != 0)
    {
        swap(p[0], p[pos]);
    }


    for(int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    cout << endl;
}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        soln();
    }

    return 0;
}
