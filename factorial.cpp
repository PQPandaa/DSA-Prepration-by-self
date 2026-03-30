// #include<iostream>
// using namespace std;
// int main()
// {
//     int fact=1,num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     for(int i=num;i>=1;i--)
//     {
//         fact*=i;
//     }
//     cout<<"Factorial = "<<fact<<endl;
// }


// using function
#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=num;i>=1;i--)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Factorial = "<<factorial(a)<<endl;
}