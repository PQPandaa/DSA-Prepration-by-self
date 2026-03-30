#include<iostream>
using namespace std;
void num_swap(int num1,int num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    num_swap(a,b); // function call
    cout<<"Swaping numbers: "<<endl;
    cout<<"Num1 = "<<b<<endl;
    cout<<"Num2 = "<<a<<endl;
}