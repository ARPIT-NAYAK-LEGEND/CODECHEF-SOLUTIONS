#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the length of array a
        vector<int> a(n), b(n);
        unordered_map<int, int> freq; // Frequency map to count occurrences
        int current_mode = 0; // Current mode value
        int max_freq = 0; // Maximum frequency encountered

        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Read the elements of array a
            freq[a[i]]++; // Increment the frequency of a[i]

            // Check if we need to update the current mode
            if (freq[a[i]] > max_freq) {
                max_freq = freq[a[i]];
                current_mode = a[i];
            }

            // Assign the current mode to b[i]
            b[i] = current_mode;
        }

        // Output the result for the current test case
        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << endl; // New line after each test case
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve(); // Call the solve function
    return 0;
}