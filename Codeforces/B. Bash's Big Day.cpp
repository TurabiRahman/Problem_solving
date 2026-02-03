/*

// <><> TLE <><>


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

vector <int> sieve(int n)
{
    vector <bool> v(n, true);

    v[0] = false;
    v[1] = false;

    for(int i = 2; i * i <= n; i++)
    {
        if(v[i] == true)
        {
            for(int j = i * i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }

    vector <int> res;

    for(int i = 2; i <= n; i++)
    {
        if(v[i] == true)
        {
            res.push_back(i);
        }
    }

    return res;
}

signed main()
{
    int t;
    cin >> t;

    vector <int> v(t);

    taking_input(v, t);
    sort_asc(v);

    if(t == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        int max_num = v[t - 1];

        vector <int> res = sieve(max_num);

        int ans = 0;

        for(int i = 0; i < t; i++)
        {
            int count = 0;
            for(int j = 0; j < t; j++)
            {
                if(v[j] % res[i] == 0)
                {
                    count++;
                }
            }

            ans = max(ans, count);
        }

        cout << ans << endl;
    }

    return 0;
}

*/


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())
#define reverse_lr(v, l, r) reverse((v).begin() + (l), (v).begin() + (r) + 1)
#define fast ios::sync_with_stdio(false); cin.tie(NULL)

vector <int> sieve(int n)
{
    vector <bool> v(n, true);

    v[0] = false;
    v[1] = false;

    for(int i = 2; i * i <= n; i++)
    {
        if(v[i] == true)
        {
            for(int j = i * i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }

    vector <int> res;

    for(int i = 2; i <= n; i++)
    {
        if(v[i] == true)
        {
            res.push_back(i);
        }
    }

    return res;
}


signed main()
{
    fast;

    int t;
    cin >> t;

    vector <int> v(t);
    taking_input(v, t);

    if(t == 1)
    {
        cout << 1 << endl;

        return 0;
    }

    int max_num = *max_element(v.begin(), v.end());

    vector <int> primes = sieve(max_num);

    unordered_map <int, int> freq;

    for(int x : v)
    {
        freq[x]++;
    }

    int ans = 1;

    for(int p : primes)
    {
        int count = 0;

        for(int i = p; i <= max_num; i += p)
        {
            count += freq[i];
        }

        ans = max(ans, count);
    }

    cout << ans << endl;

    return 0;
}

































