/*#include <bits/stdc++.h>
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

vector <int> prefix_sum(deque <int> dq)
{
    int n = dq.size();
    vector <int> v(n);

    v[0] = dq[0];

    for(int i = 1; i < n; i++)
    {
        v[i] = v[i - 1] + dq[i];
    }

    return v;
}

signed main()
{
    int n;
    cin >> n;

    deque <int> dq;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        dq.push_back(x);
    }

    int q;
    cin >> q;

    vector <int> v = prefix_sum(dq);

    while(q--)
    {
        int s;
        cin >> s;

        if(s == 1)
        {
            int l, r;
            cin >> l >> r;

            if(l == 1)
            {
                cout << v[r - 1] << endl;
            }
            else
            {
                cout << v[r - 1] - v[l - 2] << endl;
            }
        }
        else
        {
            int y;
            cin >> y;

            dq.push_front(y);

            v = prefix_sum(dq);
        }
    }

    return 0;
}



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

vector <int> prefix_sum(deque <int> dq)
{
    int n = dq.size();
    vector <int> v;

    v.push_back(dq[n - 1]);

    for(int i = 1; i < n; i++)
    {
        int x;
        x = v[i - 1] + dq[n - i - 1];
        v.push_back(x);
    }

    reverse(v.begin(), v.end());

    return v;
}

signed main()
{
    int n;
    cin >> n;

    deque <int> dq;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        dq.push_back(x);
    }

    int q;
    cin >> q;

    vector <int> v = prefix_sum(dq);

    for(auto &a : v)
    {
        cout << a << " ";
    }

    cout << endl;

    while(q--)
    {
        int s;
        cin >> s;

        if(s == 1)
        {
            int l, r;
            cin >> l >> r;

            if(l == 1)
            {
                cout << v[r - 1] << endl;
            }
            else
            {
                cout << v[v.size() - l + 1] - v[v.size() - r] << endl;
            }
        }
        else
        {
            int y;
            cin >> y;

            dq.push_front(y);

            v = prefix_sum(dq);
        }
    }

    return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Take the size of the array
	long long n;
	cin >> n;

	// Take the array
	vector<long long> iv;
	for(long long i=0; i<n; i++)
	{
	    long long x;
	    cin >> x;
	    iv.push_back(x);
	}

	// prepare the "postfix sum reversed" array
	vector<long long> sv;
	sv.push_back(0);
	for(long long i=n-1; i>=0; i--)
	{
	    long long lastSv = sv[sv.size() - 1];
	    long long lastIv = iv[i];
	    sv.push_back(lastSv + lastIv);
	}


	// Process queries
	long long q;
	cin >> q;
	while(q--)
	{
		long long op;
		cin >> op;
		if(op == 1)
		{
			long long l,r;
			cin >> l >> r;;
			cout << sv[n-l+1] - sv[n-r] << endl;
		}
		else
		{
			long long val;
			cin >> val;
			sv.push_back(sv[sv.size() - 1] + val);
			n++;
		}
	}
	return 0;
}

