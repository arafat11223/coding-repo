#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(5);
    cout<<"enter the input : ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    ofstream fout;
    fout.open("9.txt");
    fout<<"original data: ";
    if(fout.is_open())
    {
        cout<<"file open successfully"<<endl;
    }
    else
    {
        cout<<"failed to open file";
    }
    for(int i=0;i<v.size();i++)
    {
        fout<<v[i]<<" ";
    }
    fout<<"\nsorted data: ";
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        fout<<v[i]<<" ";
    }
    fout.close();
    ifstream fin;
    fin.open("9.txt");
    if(fin.is_open())
    {
        cout << "successfully to open the file for reading" << endl;
    }
    else
    {
        cout << "failed to open the file for reading" << endl;
    }
    
    string line;
    while(!fin.eof())
    {
        getline(fin,line);
        cout<<line<<endl;
    }
    fin.close();


}