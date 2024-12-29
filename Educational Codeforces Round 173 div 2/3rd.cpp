#include <iostream>
#include <vector>
#include <set>
using namespace std;

void find_subarray_sums(int n, vector<int>& a) {
    set<int> sums;
    sums.insert(0); // Include the empty subarray sum
    int current_sum = 0;
    for (int i = 0; i < n; ++i) {
        current_sum += a[i];
        sums.insert(current_sum);
    }
    cout << sums.size() << endl;
    for (int sum : sums) {
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        find_subarray_sums(n, a);
    }
    return 0;
}
