#include<iostream>
using namespace  std;
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter num: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}