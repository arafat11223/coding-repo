#include <iostream>
#include <fstream>  // For file handling
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    ofstream outFile("RAND.TXT");
    if (outFile.is_open()){
        cout<<"file open successful";
    }
    else
    {
        cout<<"failed to open file";
    }
    for (int i = 0; i < 100; i++) {
        int randomNum = rand() % 1000;  // Generate a random number between 0 and 999
        outFile << randomNum << " ";   // Write the number to the file
    }
    outFile.close();  
    ifstream inFile("RAND.TXT");
    if (inFile.is_open()){
        cout<<"file open successful";
    }
    else
    {
        cout<<"failed to open file";
    }
    cout << "Contents of RAND.TXT:" << endl;
    string line;
    while(!inFile.eof())
    {
        getline(inFile,line);
        cout<<line<<endl;
    }
    inFile.close();  
    return 0;
}