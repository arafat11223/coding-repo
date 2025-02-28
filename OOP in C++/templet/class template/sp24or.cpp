#include <iostream>
using namespace std;

// Template class for a generic array
template <typename T>
class GenericArray {
private:
    T* arr;       // Pointer to the array
    int size;     // Size of the array

public:
    // Constructor to initialize the array with size
    GenericArray(int n) {
        size = n;
        arr = new T[size];
    }

    // Destructor to free memory
    ~GenericArray() {
        delete[] arr;
    }

    // Method to set values in the array
    void setValues() {
        cout << "Enter " << size << " values: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    // Method to display the array elements
    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Method to calculate the summation of all elements
    T getSum() {
        T sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum;
    }
};

// Main function to demonstrate functionality
int main() {
    // Integer array
    cout << "Integer Array:" << endl;
    GenericArray<int> intArray(5);
    intArray.setValues();
    intArray.display();
    cout << "Sum of integers: " << intArray.getSum() << endl;

    // Double array
    cout << "\nDouble Array:" << endl;
    GenericArray<double> doubleArray(4);
    doubleArray.setValues();
    doubleArray.display();
    cout << "Sum of doubles: " << doubleArray.getSum() << endl;

    // Character array
    // Note: Summing characters will give their ASCII sum
    cout << "\nCharacter Array:" << endl;
    GenericArray<char> charArray(3);
    charArray.setValues();
    charArray.display();
    cout << "Sum of characters (ASCII values): " << (int)charArray.getSum() << endl;

    return 0;
}
