#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int count_a = 0;
        int count_b = 0;

        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'a')
            {
                count_a++;
            }
            else
            {
                count_b++;
            }
        }

        int maxA = 0, maxB = 0;
        int countA = 0, countB = 0;

        for (char c : str)
        {
            if (c == 'a')
            {
                countA++;
                countB = 0;
            }
            else if (c == 'b')
            {
                countB++;
                countA = 0;
            }

            maxA = max(maxA, countA);
            maxB = max(maxB, countB);
        }

        if(count_a == count_b)
        {
            cout << 0 << endl;
        }
        else if(count_a == 0 || count_b == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if(count_a > count_b)
            {
                int res = count_a - count_b;

                if(res <= maxA)
                {
                    cout << res << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
            else
            {
                int rest = count_b - count_a;

                if(rest <= maxB)
                {
                    cout << rest << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
    }
}
