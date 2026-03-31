#include<iostream>
using namespace std;
int main()
{
    int a[]={2,3,1,3,2,4,1};
    for(int i=0;i<7;i++)
    {
        for (int j=i+1;j<7;j++)
        {
            if(a[i]==a[j])
            {
                a[i]=a[j]=-1;
            }
        }
    }
    for(int i=0;i<7;i++)
    {
        if(a[i]>0)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}