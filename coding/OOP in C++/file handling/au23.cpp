#include <iostream>
#include <fstream> // For file handling
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    const int numCount = 30; // Total numbers to write and read
    const string filename = "4C NUMBERS.txt";

    // Step 1: Write 30 floating-point numbers to the file
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    srand(static_cast<unsigned>(time(0))); // Seed random number generator

    cout << "Writing numbers to the file:" << endl;
    for (int i = 0; i < numCount; i++) {
        float randomNum = static_cast<float>(rand()) / RAND_MAX * 100.0f; // Random number between 0.0 and 100.0
        outFile << randomNum << endl; // Write to the file, one number per line
        cout << randomNum << endl;    // Also display on the screen
    }
    outFile.close();

    // Step 2: Read the numbers from the file and calculate the average
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    float sum = 0.0f;
    float number;
    int count = 0;

    while (inFile >> number) { // Read each number from the file
        sum += number;
        count++;
    }
    inFile.close();

    // Step 3: Calculate the average
    if (count > 0) {
        float average = sum / count;
        cout << "The average of the numbers is: " << average << endl;
    } else {
        cout << "No numbers found in the file!" << endl;
    }

    return 0;
}