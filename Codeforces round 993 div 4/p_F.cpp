#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Input variables
    int n, m, q;
    cin >> n >> m >> q;

    // Read input arrays
    vector<long long> a(n), b(m);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;

    // Precompute grid sums 
    vector<long long> row_sums(n, 0);
    vector<long long> col_sums(m, 0);
    long long total_sum = 0;

    // Compute row and column sums, and total grid sum
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long cell_val = a[i] * b[j];
            row_sums[i] += cell_val;
            col_sums[j] += cell_val;
            total_sum += cell_val;
        }
    }

    // Process queries
    while (q--) {
        long long target;
        cin >> target;

        bool found = false;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                // Compute beauty if (r,c) cell and its row/column are zeroed
                long long beauty = total_sum - row_sums[r] - col_sums[c] + a[r] * b[c];
                
                if (beauty == target) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        cout << (found ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}