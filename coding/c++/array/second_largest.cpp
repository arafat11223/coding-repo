//find the second largest element in the given array
#include<iostream>
using namespace std;
int largest_index(int a[],int size)
{
    int max=a[0];
    int maxindex=-1;
    int i;
    for(i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            maxindex=i;
        }
    }
    return maxindex;
    
}
int main()
{
    int array[]={2,4,6,4,8,9,0};
    //int size=7;
    int max_index=largest_index(array,7);
    array[max_index]=-1;
    //cout<<max_index;
    int second_largest_index=largest_index(array,7);
    cout<<"second largest index ="<<array[second_largest_index];




}