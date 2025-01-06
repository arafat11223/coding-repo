#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate
using namespace std;
template <typename T>
double calculateAverage(const vector<T>& arr) {
if (arr.empty()) {
cerr << "Error: Array is empty. Cannot calculate average.\n";
return 0.0;
}

return accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
}
int main() {
// Array of integers
vector<int> intArray = {10, 20, 30, 40, 50};
cout << "Average of integers: " << calculateAverage(intArray) << endl;
// Array of floating-point numbers
vector<double> doubleArray = {3.5, 4.7, 2.9, 6.1, 1.8};
cout << "Average of doubles: " << calculateAverage(doubleArray) << endl;
// Array of characters
vector<char> charArray = {'A', 'B', 'C', 'D', 'E'};
cout << "Average of characters: " << calculateAverage(charArray) << endl;
return 0;
}