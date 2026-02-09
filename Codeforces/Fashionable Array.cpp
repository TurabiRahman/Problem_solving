#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector <int> v;

        for(int j = 0; j < n; j++)
        {
            int x;
            cin >> x;

            v.push_back(x);
        }

        sort(v.begin(),v.end());
        int begin1, end1;
        begin1 = 0;
        end1 = n - 1;

        int count1 = 0;
        int count2 = 0;

        //for(int j = 0; j < n; j++)
        //{
            if(v[begin1] % 2 == 0)
            {
                for(int k = end1; k >= 0; k--)
                {
                    if(v[k] % 2 != 0)
                    {
                        count1++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else if(v[begin1] % 2 != 0)
            {
                for(int k = end1; k >= 0; k--)
                {
                    if(v[k] % 2 == 0)
                    {
                        count1++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        //}

        //for(int j = 0; j < n; j++)
        //{
            if(v[end1] % 2 == 0)
            {
                for(int k = 0; k != -1; k++)
                {
                    if(v[k] % 2 != 0)
                    {
                        count2++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else if(v[end1] % 2 != 0)
            {
                for(int k = 0; k != -1; k++)
                {
                    if(v[k] % 2 == 0)
                    {
                        count2++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        //}

        cout << min(count1, count2) << endl;
    }

    return 0;
}
/*int max = v[end1] , min = v[begin1];
            int result = max + min;
            int flag = 0;

            if(result % 2 == 0)
            {
                cout << count << endl;
                break;
            }
            else
            {
                if((v[end1 -1] + v[begin1]) % 2 == 0)
                {
                    cout << count + 1 << endl;
                    break;
                }
                else if((v[end1] + v[begin1 + 1]) % 2 == 0)
                {
                    cout << count + 1 << endl;
                    break;
                }
                else
                {
                    begin1++;
                    end1--;
                    count = count + 2;
                }
            }*/
