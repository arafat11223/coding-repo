#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }

        int max_pairs = n / 2;
        int possible_good_pairs = (count0 / 2) + (count1 / 2);

        // Condition 1: Cannot have more than n/2 pairs
        // Condition 2: Cannot have more pairs than possible from the character counts
        // Condition 3: Check parity: difference between max possible and desired must be even
        // (Since swapping 1 pair affects 2 characters, we must maintain parity)
        if (k <= max_pairs && k <= possible_good_pairs && (max_pairs - k) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
