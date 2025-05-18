
#include<bits/stdc++.h>
using namespace std;


int main() {
   
    
    int test;
    cin>>test;
    cin.ignore(); 
    while(test--)
    {
        string s;
        getline(cin,s);
        //cin.ignore(); 
        cout<<s[0];
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            
            if(s[i]==' ')
            {
                cout<<s[i+1];

            }
        }
        cout<<endl;

    }



    return 0;
}