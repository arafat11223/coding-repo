#include <bits/stdc++.h>
using namespace std;

void countsort(vector<int>& arr, int n) {
    int maxElement = *max_element(arr.begin(), arr.end());
    vector<int> count(maxElement + 1, 0);

    // Step 1: Frequency
    for (auto ele : arr) {
        count[ele]++;
    }

    // Step 2: Cumulative sum
    for (int i = 1; i < count.size(); i++) {
        count[i] += count[i - 1];
    }

    // Step 3: Stable placement
    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--) {
        count[arr[i]]--;
        output[count[arr[i]]] = arr[i];
    }

    // Step 4: Print sorted array
    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    countsort(arr, n);
}
