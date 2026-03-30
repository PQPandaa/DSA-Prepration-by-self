#include<iostream>
using namespace std;
int indexValue(int n,int arr[], int search)
{
    int search, index = -1;
    for ( int i=0;i<n;i++ )
    {
        if(search==arr[i])
        {
            index=i;
            break;
        }
    }
    return index;
}
int main()
{
    int a;
    cout<<"Enter the size of arr: ";
    cin>>a;
    int brr[a];
    cout<<"Enter elements in arr: \n";
    for(int i=0;i<a;i++)
    {
        cin>>brr[i];
    }
    int pearch;
    cout<<"Enter elem to search: ";
    cin>>pearch;
    int pindex = indexValue(a, brr, pearch); // function call to indexValue function again
    // this is for the function brr to arr & pearch to search in the indexValue
    if(pindex != -1) cout<<"Index : "<<pindex<<endl;
    else cout<<"-1"<<endl;
}
