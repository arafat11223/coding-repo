//Design a program to write the following information to a file called
// WhoAreYou.txt:
// Name: xxxxxxx
// Semester: Spring 2022
// Course Code: CSE-1221
// Course Title: Computer Programming 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream infile("WhoAreYou.txt");
    if(infile.is_open())
    {
        cout<<"file open successfully"<<endl;
    }
    else
    {
        cout<<"failed to open file"<<endl;
    }
    string name;
    cout<<"enter your name :";
    getline(cin,name);
    infile<<"Name: "<<name<<endl;
    //infile<<"Name: Arafat hossain"<<endl;
    infile<<"Semester: Spring 2022"<<endl;
    infile<<"Course Code: CSE-1221"<<endl;
    infile<<"Course Title: Computer Programming 2"<<endl;
    infile.close();
    ifstream outfile;
    outfile.open("WhoAreYou.txt");
    string line;
    while(!outfile.eof())
    {
        getline(outfile,line);
        cout<<line<<endl;
    }
    outfile.close();
}