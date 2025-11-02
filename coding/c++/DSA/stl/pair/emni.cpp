#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        vector<long long> v1, v2; // v1 = even, v2 = odd

        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if(x % 2 == 0)
                v1.push_back(x);
            else
                v2.push_back(x);
        }

        long long sum_even = accumulate(v1.begin(), v1.end(), 0LL);

        if(v2.empty()) {
            cout << 0 << "\n"; // mower never turns on
            continue;          // move to next test case
        }

        sort(v2.begin(), v2.end()); // ascending sort to remove smallest odd if needed
        long long sum_odd = accumulate(v2.begin(), v2.end(), 0LL);

        if(v2.size() % 2 == 0) {
            cout << sum_even + sum_odd << "\n"; // all odd can be included
        } else {
            cout << sum_even + sum_odd - v2[0] << "\n"; // drop smallest odd
        }
    }
}
