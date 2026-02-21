#include <bits/stdc++.h>
using namespace std;

int main()
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

        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(v[i] == v[j] && i != j)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 1)
            {
                break;
            }
        }

        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
