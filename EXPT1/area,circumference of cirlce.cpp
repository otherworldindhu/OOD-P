#include<iostream>
#define pi 3.14
using namespace std;
int main()
{
    int area,c,r;
    cout<<"Enter radius:";
    cin>>r;
    area=pi*r*r;
    c=2*pi*r;
    cout<<"Area of circle="<<area;
    cout<<"\nCircumference of circle="<<c;
    return 0;
}