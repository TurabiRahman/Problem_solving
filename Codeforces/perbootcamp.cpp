#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int x;
    int n = 0;

    while(cin >> x)
    {
        v.push_back(x);
        n++;
    }

    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());

    vector <int> v1;

    for(int i = min; i <= max; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(v1[])
        }
    }

    return 0;
}
