

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

        int start_index = -1;
        int end_index = -1;
        int problem = -1;
        int flag = 0;

        vector <int> v1 = v;
        sort_dec(v1);

        for(int i = 0; i < n; i++)
        {
            if(v[i] != v1[i])
            {
                problem = v1[i];
                start_index = i;
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            for(int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }

            cout << endl;
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(v[i] == problem)
                {
                    end_index = i;
                }
            }

            reverse(v.begin() + start_index, v.begin() + end_index + 1);

            for(int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}
