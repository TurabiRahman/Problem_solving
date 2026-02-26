#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> blogs(n);

        for (int i = 0; i < n; i++) {
            int l;
            cin >> l;
            blogs[i].resize(l);
            for (int j = 0; j < l; j++) {
                cin >> blogs[i][j];
            }
            reverse(blogs[i].begin(), blogs[i].end());
        }

        // Sort blogs lexicographically
        sort(blogs.begin(), blogs.end());

        unordered_set<int> used;
        vector<int> answer;

        // Traverse from last to first
        for (int i = n - 1; i >= 0; i--) {
            for (int x : blogs[i]) {
                if (!used.count(x)) {
                    used.insert(x);
                    answer.push_back(x);
                }
            }
        }

        for (int x : answer) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
