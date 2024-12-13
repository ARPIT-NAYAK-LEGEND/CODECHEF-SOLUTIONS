#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int k = 0;
        int current_position = 0;

        while (true) {
            k++;
            int move_distance = 2 * k - 1;
            if (k % 2 == 1) {
                current_position -= move_distance;
            } else {
                current_position += move_distance;
            }

  
            if (current_position < -n || current_position > n) {
                break;
            }
        }
        if (k % 2 == 1) {
            cout << "Sakurako" << endl;
        } else {
            cout << "Kosuke" << endl;
        }
    }

    return 0;
}