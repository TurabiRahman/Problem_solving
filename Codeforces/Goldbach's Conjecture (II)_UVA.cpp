#include <bits/stdc++.h>
using namespace std;

#define int long long
#define input(a) int a; cin >> a;
#define output(a) cout << (a) << endl;
#define taking_input(v, n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define sort_dec(v) sort((v).begin(), (v).end(), greater<int>())
#define sort_asc(v) sort((v).begin(), (v).end())

const int MAXN = 1000000;

vector<bool> isPrime(MAXN + 1);
vector<int> primes;

void sieve()
{
    isPrime.assign(MAXN + 1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i * i <= MAXN; i++)
    {
        if(isPrime[i])
        {
            for(int j = i * i; j <= MAXN; j += i)
                isPrime[j] = false;
        }
    }

    for(int i = 3; i <= MAXN; i += 2)
    {
        if(isPrime[i])
            primes.push_back(i);
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int n;
    while(cin >> n)
    {
        if(n == 0) break;

        bool ok = false;
        int a = 0, b = 0;
        int count = 0;

        for(int i = 0; i < primes.size(); i++)
        {
            a = primes[i];
            if(a >= n) break;

            b = n - a;
            //if(b < a) break;

            if(isPrime[b])
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
