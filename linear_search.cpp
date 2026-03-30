// linea seach , if elem found give its index , else return -1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of arr: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elem in arr: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int search; // 10, 12, 70, 20, 30 
    cout<<"Enter elem to search: ";
    cin>>search;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(search == arr[i]) 
          {
            index = i;
            break;
          }
    }
    if(index != -1)
    cout<<"Elem index: "<<index<<endl;
    else cout<<"-1"<<endl;
    return 0;
}

