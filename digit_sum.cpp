// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum=0,digit;
//     while(n!=0)
//     {
//         digit=n%10;
//         sum+=digit;
//         n/=10;
//     }
//     cout<<"Sum = "<<sum<<endl;
// }

// // using function solve this
#include<iostream>
using namespace std;
int dig_sum(int num)
{
    int n,sum=0,dig;
    while(n!=0)
    {
        dig=n%10;
        sum+=dig;
        n/10;
    }
    return sum;
}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Sum of digit: "<<dig_sum(a)<<endl;
}



















