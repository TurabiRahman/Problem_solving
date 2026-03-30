#include <bits/stdc++.h>
using namespace std;

#define int long long

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int mulmod(int a, int b, int mod) {
    return (__int128)a * b % mod;
}

int powmod(int a, int b, int mod) {
    int res = 1;
    while(b) {
        if(b & 1) res = mulmod(res, a, mod);
        a = mulmod(a, a, mod);
        b >>= 1;
    }
    return res;
}

bool miller_rabin(int n) {
    if(n < 2) return false;
    for(int p : {2, 3, 5, 7, 11, 13, 17, 19, 23}) {
        if(n % p == 0) return n == p;
    }

    int d = n - 1, s = 0;
    while((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    for(int a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
        if(a % n == 0) continue;
        int x = powmod(a, d, n);
        if(x == 1 || x == n - 1) continue;

        bool composite = true;
        for(int r = 0; r < s - 1; r++) {
            x = mulmod(x, x, n);
            if(x == n - 1) {
                composite = false;
                break;
            }
        }
        if(composite) return false;
    }
    return true;
}

int pollard_rho(int n) {
    if(n % 2 == 0) return 2;

    while(true) {
        int x = uniform_int_distribution<int>(2, n - 2)(rng);
        int y = x;
        int c = uniform_int_distribution<int>(1, n - 1)(rng);
        int d = 1;

        auto f = [&](int x) {
            return (mulmod(x, x, n) + c) % n;
        };

        while(d == 1) {
            x = f(x);
            y = f(f(y));
            d = gcd(abs(x - y), n);
        }

        if(d != n) return d;
    }
}

void factor(int n, map<int,int> &mp) {
    if(n == 1) return;

    if(miller_rabin(n)) {
        mp[n]++;
        return;
    }

    int d = pollard_rho(n);
    factor(d, mp);
    factor(n / d, mp);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;

        map<int,int> mp;
        factor(n, mp);

        for(auto [p, cnt] : mp) {
            cout << p << "^" << cnt << " ";
        }
        cout << "\n";
    }
}
