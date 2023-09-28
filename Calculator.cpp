#include<iostream>
using namespace std;

void calculate()
{
    cout<<"Enter Two Number:"<<endl;
    cout<<"A:";
    float a=0,b=0;
    cin>>a;
    cout<<"B:";
    cin>>b;
    cout<<"Enter Arthmatic Operator:"<<endl;
    char ch;
    cin>>ch;
    if(ch=='+')
    {
        cout<<"A+B="<<(a+b)<<endl;
    }
    else if(ch=='-')
    {
        cout<<"A-B="<<(a-b)<<endl;
    }
    else if(ch=='*')
    {
        cout<<"A*B="<<(a*b)<<endl;
    }
    else if(ch=='/')
    {
        cout<<"A/B="<<(a/b)<<endl;
    }
}
int main()
{
    char c;
    do
    {
        calculate();
        cout<<"If You want to calculate press Y else N:";
        cin>>c;
    }while(c=='Y' || c=='y');
    return 0;
}
