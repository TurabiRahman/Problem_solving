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

        sort(v.begin(), v.end());

        int nothing = 0;
        int flag = 0;
        int sum = 0;

        for(int i = 0; i < n - 1; i++)
        {
            sum += v[i];
        }

        vector <int> v2(n);
        for(int i = 0; i < n; i++)
        {
            v2[i] = i + 1;
        }

        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(v[i] == v2[j])
                {
                    v2[i] = -1;
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(v2[i] != -1)
            {
                nothing = v2[i];
                break;
            }
        }

        cout << "nothing " << nothing << endl;

        int result = 0;
        if(sum >= nothing)
        {
            result = sum + v[n - 1];
        }
        else
        {
            result = nothing + v[n - 1];
        }

        cout << result << endl;
    }

    return 0;
}
