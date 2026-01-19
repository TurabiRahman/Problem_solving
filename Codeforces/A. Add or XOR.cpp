#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;

        ll result = 0;

        if(a == b)
        {
            result = 0;
            cout << result << endl;
        }
        else if(a < b && x <= y)
        {
            while(a != b)
            {
                result += x;
                a++;
            }

            cout << result << endl;
        }
        else if(a < b && x > y)
        {
            while(a != b)
            {
                if(a % 2 != 0)
                {
                    result += x;
                    a++;
                }
                else
                {
                    result += y;
                    a++;
                }
            }

            cout << result << endl;
        }
        else if(a > b && a % 2 != 0 && (a - b) == 1)
        {
            result += y;
            cout << result << endl;
        }
        else
        {
            result = -1;
            cout << result << endl;
        }

    }


    return 0;
}
