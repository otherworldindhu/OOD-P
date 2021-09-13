#include <iostream>
#include<math.h>
using namespace std;
int main() {

    float a,b,c,area,s;
    cout<< "Enter 3 sides of the triangle:";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area:"<<area;
    return 0;
}