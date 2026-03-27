

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

int toSeconds(string time)
{
    int h, m, s;
    char c1, c2;

    stringstream ss(time);
    ss >> h >> c1 >> m >> c2 >> s;

    return h * 3600 + m * 60 + s;
}

signed main()
{
    fast;

    string t1;
    string t2;

    cin >> t1 >> t2;

    int s1 = toSeconds(t1);
    int s2 = toSeconds(t2);

    int diffi = s2 - s1;

    if(diffi < 0)
    {
        diffi += 24 * 3600;
    }

    int h = diffi / 3600;
    diffi %= 3600;

    int m = diffi / 60;
    int s = diffi % 60;

    cout << h << " : " << m << " : " << s << endl;

    return 0;
}

