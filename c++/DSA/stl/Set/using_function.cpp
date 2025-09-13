//{ Driver Code Starts
//Initial Template for C++
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
//fghdh

multiset<int> multisetInsert(int arr[],int n)
{
    multiset<int>s;
   //Insefrt elements into a multiset
   for(int i=0;i<n;i++)
   {
       
       s.insert(arr[i]);
   }
    
    
    return s;
    
}


void multisetDisplay(multiset<int>s)
{
    //Multiset display print elements
    for(auto ele:s)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
}


void multisetErase(multiset<int>&s,int x)
{
    //If and else condition to erase x from multiset
    //int a=s.find(x);
    if(s.count(x))
    cout<<"erased "<<x;
    else
    cout<<"not found";
    
    
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    multiset<int>s=multisetInsert(arr,n);
    multisetDisplay(s);
    int x;
    cin>>x;
    multisetErase(s,x);
    multisetDisplay(s);
    
    
}


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n]; //array of size n
        for(int i=0;i<n;i++)
        cin>>arr[i]; //Input the array
        
        multiset<int>s=multisetInsert(arr,n); //call the insert function that returns a multiset
        multisetDisplay(s);// display the inserted multiset
        int x;
        cin>>x; //x element that needs to be erased from multiset
        
        multisetErase(s,x); //try to erase x from multiset
        multisetDisplay(s); //print the multiset after erase operation
        
        
    
cout << "~" << "\n";
}
	return 0;
}




// } Driver Code Ends