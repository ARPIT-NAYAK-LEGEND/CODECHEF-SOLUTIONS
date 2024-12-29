#include <iostream>
#include <vector>
using namespace std;

bool can_transform(const vector<vector<long long>>& A, const vector<vector<long long>>& B, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((A[i][j] & B[i][j]) != B[i][j] || (A[i][j] | B[i][j]) != B[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<long long>> A(n, vector<long long>(m));
        vector<vector<long long>> B(n, vector<long long>(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> A[i][j];
            }
        }
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> B[i][j];
            }
        }
        
        if (can_transform(A, B, n, m)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
