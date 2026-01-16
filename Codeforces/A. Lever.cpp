/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector <int> v1(n);
        vector <int> v2(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }

        multimap <int, int> mp;

        while(n--)
        {
            mp.insert({v1, v2});
        }

        int count = 0;

        for(auto &m : mp)
        {
            if(m.first > m.second)
            {
                count += m.first - m.second;
            }
            else
            {
                break;
            }
        }

        cout << count + 1 << endl;
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v1(n);
        vector<int> v2(n);

        for(int i = 0; i < n; i++)
            cin >> v1[i];

        for(int i = 0; i < n; i++)
            cin >> v2[i];

        multimap<int, int> mp;

        for(int i = 0; i < n; i++)
            mp.insert({v1[i], v2[i]});

        int count = 0;

        /*for(auto &n : mp)
        {
            cout << n.first << " " << n.second << endl;
        }*/

        for(auto &m : mp)
        {
            if (m.first > m.second)
                count += m.first - m.second;
        }

        cout << count + 1 << endl;
    }

    return 0;
}
