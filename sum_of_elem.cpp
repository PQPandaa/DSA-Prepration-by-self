#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers: "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
       // sum=arr[i]+arr[i+1]; // wrong approach
        // sum=sum[i]+sum[i+1];
        sum+=arr[i];
    }
    cout<<"Sum of elem: "<<sum<<endl;
    return 0;
}