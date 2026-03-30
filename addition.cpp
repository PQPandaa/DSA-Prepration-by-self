// #include<iostream>
// using namespace std;
// int add(int num1,int num2)
// {
//     int sum=num1+num2;
//     return sum;
// }
// int main()
// {
//     int a=2;
//     int b=6;
//     add(a,b);
//     cout<<add(a,b)<<endl;
// }

//         // genral program
// #include<iostream>
// using namespace std;
// int add(int num1,int num2)
// {
//     int sum=num1+num2;
//     return sum;
// }
// int main()
// {
//     // int a=2,b=6;
//     int a,b;
//     cout<<"Enter two numbers: "<<endl;
//     cin>>a;
//     cin>>b;
//     cout<<add(a,b)<<endl;
// }



       // combination fo diffrent operations\\

#include<iostream>
using namespace std;
float add(float num1,float num2)
{
    float sum=num1+num2;
    return sum;
}
float substract(float num1,float num2)
{
  float minus=num1-num2;
    return minus;
}
float multi(float num1,float num2)
{
   float mul=-num1*num2;
    return mul;
}
float divide(float num1,float num2)
{
   float dev=num1/num2;
    return dev;
}
int main()
{
    float a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"sum is: "<<add(a,b)<<endl;
    cout<<"Subtract is : "<<substract(a,b)<<endl;
    cout<<"Multiplication is: "<<multi(a,b)<<endl;
    cout<<"Division is: "<<divide(a,b)<<endl;
}


