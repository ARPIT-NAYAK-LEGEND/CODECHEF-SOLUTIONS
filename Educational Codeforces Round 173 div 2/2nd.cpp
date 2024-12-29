#include <iostream>
#include <vector>
using namespace std;

void find_divisors(int d) {
    vector<int> divisors;
    for (int i = 1; i <= 9; i += 2) {
        if (d % i == 0) {
            divisors.push_back(i);
        }
    }
    for (int i = 0; i < divisors.size(); ++i) {
        if (i > 0) cout << " ";
        cout << divisors[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        find_divisors(d);
    }
    return 0;
}
