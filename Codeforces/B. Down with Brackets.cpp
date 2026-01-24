#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string str;
        cin >> str;

        int count = 0;
        int n = str.size() - 1;
        int flag = 0;

        for(int j = 0; j < str.size(); j++)
        {
            if(str[j] == '(')
            {
                count++;
            }
            else
            {
                count--;
            }

            if(count == 0 && j != n)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
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
