/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, j, k;
        cin >> n >> j >> k;

        vector <int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int max = *max_element(v.begin(), v.end());

        //cout << max << endl;

        if(j == 1 && k == 1 && v[0] < max)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
*/

// <><><> This is the perfect solution <><><>

#include <bits/stdc++.h>
using namespace std;;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        int n, j, k;
        cin >> n >> j >> k;

        vector <int> v;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            v.push_back(x);
        }

        int max = *max_element(v.begin(), v.end());

        if(v[j - 1] == max || k > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
