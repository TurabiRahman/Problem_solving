/*

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
    int t;
    cin >> t;

    int casee = 1;

    while(t--)
    {
        int n;
        cin >> n;

        vector <int> v(n);
        taking_input(v, n);

        vector <int> minimum;
        minimum.push_back(v[0]);

        for(int i = 1; i < n; i++)
        {
            int x = v[i] -v[i - 1];
            minimum.push_back(x);
        }

        sort_dec(minimum);

        int point = minimum[0];
        int count = 0;

        for(int i = 0; i < minimum.size(); i++)
        {
            if(minimum[i] == point)
            {
                count++;
            }
        }

        if(count > point)
        {
            cout << "Case " << casee <<  ": " << count <<endl;
        }
        else
        {
            cout << "Case " << casee <<  ": " << point << endl;
        }

        casee++;
    }

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())
#define reverse_lr(v, l, r) reverse((v).begin() + (l), (v).begin() + (r) + 1)
#define fast ios::sync_with_stdio(false); cin.tie(NULL)

signed main()
{
    fast;

    int t;
    cin >> t;

    for(int cs = 1; cs <= t; cs++)
    {
        int n;
        cin >> n;

        vector <int> v(n);
        taking_input(v, n);

        vector <int> jump;

        jump.push_back(v[0]);



        for(int i = 1; i < n; i++)
        {
            jump.push_back(v[i] - v[i-1]);
        }

        int k = *max_element(jump.begin(), jump.end());



        int temp = k;
        bool ok = true;



        for(int i = 0; i < jump.size(); i++)
        {
            if(jump[i] > temp)
            {
                ok = false;
                break;
            }

            if(jump[i] == temp)
            {
                temp--;
            }
        }

        if(!ok)
            k++;

        cout << "Case " << cs << ": " << k << endl;
    }

    return 0;
}
