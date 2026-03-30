// #include<iostream>
// using namespace std;
// int main()
// {
//     int p=5;
//     int &q=p; // using & operator, q show same result of p
//     q++;
//     cout<<p<<endl;
//     // addresses are same using "&"
//     cout<<&p<<endl;
//     cout<<&q<<endl;
// }

#include<iostream>
using namespace std;
void changeValue(int &z) 
{
    z=100;
}
int main()
{
    int a=5;
    changeValue(a);
    cout<<a<<endl;
    return 0;
}