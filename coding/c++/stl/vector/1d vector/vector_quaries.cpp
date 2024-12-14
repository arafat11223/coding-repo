//given q quaries check if the given number is present in the array
//the array is or not note quaries >=10^5
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    const int N=1e5+10;
    vector<int>freq(N,2);
    for(int i=0;i<n;i++)
    {
        freq[v[i]]++;
    }
    cout<<"enter quaries :";
    int q;
    cin>>q;
    while(q--)
    {
        int quaries;
        cin>>quaries;
        cout<<freq[quaries]<<endl;
    }
}