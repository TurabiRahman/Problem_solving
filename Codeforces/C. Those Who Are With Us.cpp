#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, m;
        cin >> n >> m;

        ll array1[n][m], array2[m][n];
        ll max = 0, max_n_c = 0, max_n_r = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> array1[i][j];

                array2[j][i] = array1[i][j];
                if(array1[i][j] >= max)
                {
                    max = array1[i][j];
                }
            }
        }

        ll count1 = 0, count2 = 0;
        ll target_row = 0;
        ll target_col = 0;

        for(int i = 0; i < n; i++)
        {
            ll count = 0;
            for(int j = 0; j < m; j++)
            {
                if(array1[i][j] == max)
                {
                    count++;
                }
            }

            if(count >= count1)
            {
                count1 = count;
                target_row = i;
            }
        }

        for(int i = 0; i < m; i++)
        {
            ll count = 0;
            for(int j = 0; j < n; j++)
            {
                if(array2[i][j] == max)
                {
                    count++;
                }
            }

            if(count >= count2)
            {
                count2 = count;
                target_col = i;
            }
        }

        cout << target_row << " " << target_col << endl;

        ll result = 0;
        /*if(target_row == target_col)
        {
            target_row--;
        }*/

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i == target_row)
                {
                    array1[i][j]--;
                }
                if(j == target_col && i != target_row)
                {
                    array1[i][j]--;
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {

                cout << array1[i][j] << " ";
                if(array1[i][j] >= result)
                {
                    result = array1[i][j];
                }
            }
            cout << endl;
        }

        cout << result << endl;
    }

    return 0;
}
