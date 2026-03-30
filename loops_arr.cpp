#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    // for loop
    for(int i=0;i<4;i++)
    {
       // cout<<arr[i]<<endl;
    }
    // for each loop
    for(int ele:arr)
    {
        //cout<<ele<<endl;
    }
    // while loop
    int index=0;
    while(index<4)
    {
        cout<<arr[index]<<endl;
        index++;
    }
    return 0;
}