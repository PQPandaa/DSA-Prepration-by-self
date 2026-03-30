#include<iostream>
using namespace std;
int max_function(int n, int arr[])
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main()
{
    int a;
    cout<<"Enter size of array: ";
    cin>>a;
    int brr[a];
    int max=brr[0];
    cout<<"Enter elem in arr: ";
    for(int i=0;i<a;i++)
    {
        cin>>brr[i];
    }
    cout<<"Max elem: "<<max_function(a,brr)<<endl; // function call
    return 0;
}