#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a and b:";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a;
    cout<<"\nb="<<b;
    return 0;
}