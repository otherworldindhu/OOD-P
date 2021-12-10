#include<iostream>
using namespace std;
template<typename T>
T add(T num1,T num2)
{
    return (num1+num2);
}
int main()
{
    int result1;
    double result2;
    result1=add<int>(2,3);
    cout<<"2+3="<<result1;
    result2=add<double>(2.2,3.3);
    cout<<"\n2.2+3.3="<<result2;
    return 0;
}