

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())
#define reverse_lr(v, l, r) reverse((v).begin() + (l), (v).begin() + (r) + 1)
#define fast ios::sync_with_stdio(false); cin.tie(NULL)


inline int countDigit(int n)
{
    if (n / 10 == 0) return 1;

    return 1 + countDigit(n / 10);
}

int Binary_search(vector <int> &v, int left , int right, int target)
{
    if(left > right)
    {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if(v[mid] == target)
    {
        return v[mid];
    }
    else if(v[mid] > target)
    {
        return Binary_search(v, left, mid - 1, target);
    }
    else
    {
        return Binary_search(v, mid + 1, right, target);
    }
}

signed main()
{
    int n;
    cin >> n;

    vector <int> v(n);
    taking_input(v, n);
    sort_asc(v);


    int x;
    cin >> x;

    int res = Binary_search(v, 0, n - 1, x);

    cout << res << endl;

    return 0;
}

