#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int operations = 0; // Counter for Timar operations
        int i = 0;

        while (i < n) {
            if (s[i] == '0') {
                // Find the start of the segment of 0s
                int j = i;
                while (j < n && s[j] == '0') {
                    j++;
                }
                // Length of the segment of 0s
                int len = j - i;

                // If the segment is too weak (len >= m), calculate required operations
                if (len >= m) {
                    operations += (len - m + k) / k;
                }

                // Move to the next segment
                i = j;
            } else {
                i++;
            }
        }

        cout << operations << endl;
    }

    return 0;
}