#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; // v(5);
    // for loop
    cout<<"Enter the elem: "<<endl;
    for(int i=0;i<5;i++)
    {
        int elem; // direct cin>>v[i]; also
        cin>>elem;
        v.push_back(elem);
    }
    cout<<"Elems are: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // for each loop
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    // while loop
    int i,idx=0;
    while (idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }
    return 0;
}