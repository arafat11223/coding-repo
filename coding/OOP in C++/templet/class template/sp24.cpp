#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

// Template function to calculate the median
template <typename T>
T CalculateMedian(vector<T> data) {
    // Sort the data
    sort(data.begin(), data.end());

    int size = data.size();
    
    if (size % 2 == 0) {
        // For even number of elements, return the average of the two middle elements
        return (data[size / 2 - 1] + data[size / 2]) / 2;
    } else {
        // For odd number of elements, return the middle element
        return data[size / 2];
    }
}

int main() {
    // Test for integers
    vector<int> intArray = {5, 1, 7, 3, 9};
    cout << "Median (int): " << CalculateMedian(intArray) << endl;

    // Test for doubles
    vector<double> doubleArray = {1.5, 3.2, 2.8, 4.0};
    cout << "Median (double): " << CalculateMedian(doubleArray) << endl;

    // Test for characters
    vector<char> charArray = {'d', 'a', 'c', 'b'};
    cout << "Median (char): " << CalculateMedian(charArray) << endl;

    return 0;
}
