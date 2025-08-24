#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + st] = temp[idx];
    }
}
void mergesort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + ((end - st) / 2);
        mergesort(arr, st, mid);      // left half
        mergesort(arr, mid + 1, end); // right half
        merge(arr, st, mid, end);
    }
}
double median(vector<int>&arr,int n)
{
    if(n%2!=0)
    {
        return arr[n/2];
    }
    else
    {
        return (arr[n/2-1]+arr[n/2])/2.0;
    }
}
int main()
{
    vector<int> arr = {4, 2, 7, 0, 3, 1};
    int n= arr.size();
    mergesort(arr, 0, arr.size() - 1);
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout<<endl;
    int med=median(arr,n);
    cout<<"median: "<<med<<endl;
}