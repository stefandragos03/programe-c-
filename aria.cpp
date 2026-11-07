#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c;
    float p;
    float arie;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    arie=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<arie;
}
