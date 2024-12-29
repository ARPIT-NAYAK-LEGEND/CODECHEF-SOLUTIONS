#include <iostream>
#include <vector>
#include <string>
using namespace std;

string reverseString(const string &s) {
    string reversed = s;
    for (char &c : reversed) {
        if (c == 'p') {
            c = 'q';
        } else if (c == 'q') {
            c = 'p';
        }
    }
    return string(reversed.rbegin(), reversed.rend());
}

int main() {
    int t;
    cin >> t;
    vector<string> results;
    while (t--) {
        string a;
        cin >> a;
        results.push_back(reverseString(a));
    }
    for (const string &result : results) {
        cout << result << endl;
    }
    return 0;
}
