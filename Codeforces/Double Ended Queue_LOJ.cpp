

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

    int casee = 1;

    while(t--)
    {
        cout << "Case " << casee << ":" << endl;
        casee++;

        int n, m;
        cin >> n >> m;

        deque <int> dq;

        while(m--)
        {
            string str;
            cin >> str;

            if(str == "pushLeft")
            {
                int x;
                cin >> x;

                if(dq.size() == n)
                {
                    cout << "The queue is full" << endl;
                }
                else
                {
                    dq.push_front(x);
                    cout << "Pushed in left: " << x << endl;
                }
            }
            else if(str == "pushRight")
            {
                int x;
                cin >> x;

                if(dq.size() == n)
                {
                    cout << "The queue is full" << endl;
                }
                else
                {
                    dq.push_back(x);
                    cout << "Pushed in right: " << x << endl;
                }
            }
            else if(str == "popLeft")
            {
                if(dq.empty())
                {
                    cout << "The queue is empty" << endl;
                }
                else
                {
                    cout << "Popped from left: " << dq.front() << endl;
                    dq.pop_front();
                }
            }
            else
            {
                if(dq.empty())
                {
                    cout << "The queue is empty" << endl;
                }
                else
                {
                    cout << "Popped from right: " << dq.back() << endl;
                    dq.pop_back();
                }
            }
        }
    }

    return 0;
}


