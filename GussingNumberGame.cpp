#include<iostream>
using namespace std;
int main()
{
  
    char ch;
    int i=1;
    do
    {
    int a=0,b=0,c=1,d=0;
    while(c<=10)
    {
        cout<<"Input Number:";
        cin>>a;
        srand(i);
        b=(rand()%100)+1;
        cout<<"Input Number:"<<a<<endl;
        cout<<"Generate Number:"<<b<<endl;
        i=i+5;
        if(a==b)
        {
            d=1;
            break;
        }
        c++;
    }
    if(d==1)
    {
        cout<<"Congratulations! You Guess The Number in "<<c<<" Approches"<<endl;
    }
    else
    {
        cout<<"Better Luck Next Time You take Too many Approches"<<endl;
    }

    cout<<"If you play this Again then press Y else N";
    cin>>ch;
    }while(ch=='y'|| ch=='Y');

    return 0;
}
