#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
       ll n;
       cin >> n;

       vector <int> v;
       for(int i = 0; i < n; i++)
       {
           ll x;
           cin >> x;

           v.push_back(x);
       }

       ll count = 1;
       ll flag = v[0];

       for(int i = 1; i < n; i++)
       {
           if(v[i] > flag + 1)
           {
               count++;
               flag = v[i];
           }
       }

       cout << count << endl;
    }

    return 0;
}
