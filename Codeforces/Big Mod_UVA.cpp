

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
signed main()
{
    fast;

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

#define int long long

int binExp(int B, int P, int M)
{
    int result = 1;

    B = B % M; // important step

    while(P > 0)
    {
        // if P is odd
        if(P % 2 == 1)
        {
            result = (result * B) % M;
        }

        // square the base
        B = (B * B) % M;

        // divide power by 2
        P = P / 2;
    }

    return result;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int B, P, M;

    while(cin >> B)
    {
        cin >> P >> M;

        cout << binExp(B, P, M) << '\n';
    }

    return 0;
}
