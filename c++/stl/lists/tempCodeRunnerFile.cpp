
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize the vector with the given values
    vector<int> vec = {5, 10, 2, 55, 60, 3};

    // Display the initial vector
    cout << "Initial Vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // Remove the element at index 2
    vec.erase(vec.begin() + 2);

    // Insert 15 at index 1
    vec.insert(vec.begin() + 1, 15);

    // Remove the first element
    vec.erase(vec.begin());

    // Display the modified vector
    cout << "Modified Vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}