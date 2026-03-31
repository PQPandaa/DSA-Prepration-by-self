#include<iostream>
using namespace std;
int largElemIndex(int arr[], int size)
{
    int max=INT16_MIN;
    int maxIndex=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}
int main()
{
    int arr[]={2,3,5,7,6,1};
    // we can take array input a/c to condition
    int indexOflargest=largElemIndex(arr,6);
    arr[indexOflargest]=-1;
    int indexofSecondLargest = largElemIndex(arr,6);
    cout<<arr[indexofSecondLargest]<<endl;
    return 0;
}