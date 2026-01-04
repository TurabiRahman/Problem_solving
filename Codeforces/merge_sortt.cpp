
#include <bits/stdc++.h>
using namespace std;

void merge(vector <int>& v, int left, int mid, int right)
{
    vector <int> tem;

    int low = left;
    int high = mid + 1;

    while(low <= mid && high <= right)
    {
        if(v[low] <= v[high])
        {
            tem.push_back(v[low]);
            low++;
        }
        else
        {
            tem.push_back(v[high]);
            high++;
        }
    }

    while(low <= mid)
    {
        tem.push_back(v[low]);
        low++;
    }

    while(high <= right)
    {
        tem.push_back(v[high]);
        high++;
    }

    int t = right - left + 1;

    for(int i = 0; i < t; i++)
    {
        v[left + i] = tem[i];
    }
}

void merge_them(vector <int>& v, int left, int right)
{
    if(left >= right)
    {
        return;
    }
    else
    {
        int mid = (left + right) / 2;

        merge_them(v, left, mid);
        merge_them(v, mid + 1, right);

        merge(v, left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    merge_them(v, 0, n - 1);

    for(int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
