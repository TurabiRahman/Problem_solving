
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define input(a) int a; cin >> a;
#define output(a) cout << (a) << endl;
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())

inline int countDigit(int n)
{
    if (n / 10 == 0) return 1;

    return 1 + countDigit(n / 10);
}

vector <int> sieve(int n)
{
    vector <bool> prime(n + 1, true);

    for(int i = 2; i * i <= n; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i * i; j <= n; j+= i)
            {
                prime[j] = false;
            }
        }
    }

    vector <int> result;

    prime[0] = false;
    prime[1] = false;
    prime[2] = false;

    for(int i = 3; i + 2 <= n; i++)
    {
        if(prime[i] == true && prime[i + 2] == true)
        {
            result.push_back(i);
        }
    }

    return result;
}

signed main()
{
    vector <int> input;
    int x;

    while(cin >> x)
    {
        input.push_back(x);
    }

    vector <int> v = sieve(20000000);

    for(int i = 0; i < input.size(); i++)
    {
        int a = input[i] - 1;
        int b = v[a];

        cout << "(" << b << ", " << b + 2 << ")" << endl;
    }

    return 0;
}
