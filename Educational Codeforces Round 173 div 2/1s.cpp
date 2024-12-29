#include <iostream>
using namespace std;

long long max_coins(long long n) {
    if (n <= 3) {
        return 1;
    }
    return 2 * max_coins(n / 4);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << max_coins(n) << endl;
    }
    return 0;
}
