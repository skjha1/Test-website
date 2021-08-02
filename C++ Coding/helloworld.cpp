#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int a,b,c,s,d;
    float area;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    d= s*(s-a)*(s-b)*(s-c);
    area=sqrt(d);
    cout<<"Area of rectangle is "<<area;


    return 0;
}