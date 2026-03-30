#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elem: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int elem;
    cout<<"Enter elem of occrnce find: ";
    cin>>elem;
    int occr;
    for(int i=0;i<n;i++)
    {
        if(v[i]==elem)
        {
            occr=i;
        }
    }
    cout<<"Last occurence index: "<<occr<<endl;
}