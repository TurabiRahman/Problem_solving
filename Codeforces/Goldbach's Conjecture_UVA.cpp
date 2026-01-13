
/*#include <bits/stdc++.h>
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

    for(int i = 2; i <= n; i++)
    {
        if(prime[i] == true && i % 2 != 0)
        {
            result.push_back(i);
        }
    }

    return result;
}

signed main()
{
    vector <int> v;
    int t;

    while(cin >> t)
    {
        if(t == 0)
        {
            break;
        }
        else
        {
            v.push_back(t);
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        vector <int> all_prime = sieve(v[i]);

        int one, two;
        int flag = 0;
        int sizee = all_prime.size();
        for(int j = 0; j <= sizee; j++)
        {
            for(int k = sizee; k >= 0; k--)
            {
                int res = all_prime[j] + all_prime[k];

                if(res == v[i])
                {
                    one = all_prime[j];
                    two = all_prime[k];

                    flag = 1;
                    break;
                }
            }

            if(flag == 1)
            {
                break;
            }
        }

        if(flag == 0)
        {
            cout << "Goldbach's conjecture is wrong." << endl;
        }
        else
        {
            cout << v[i] << " = " << one << " + " << two << endl;
        }
    }

    return 0;
}
*/

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

        for(int i = 0; i < primes.size(); i++)
        {
            a = primes[i];
            if(a >= n) break;

            b = n - a;
            if(b < a) break;

            if(isPrime[b])
            {
                ok = true;
                break;
            }
        }

        if(ok)
            cout << n << " = " << a << " + " << b << "\n";
        else
            cout << "Goldbach's conjecture is wrong.\n";
    }

    return 0;
}
