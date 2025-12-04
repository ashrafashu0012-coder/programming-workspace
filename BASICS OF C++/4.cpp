#include<iostream>
using  namespace std;
int main(){

    int a,b,temp;
    cout<<"before swapping"<<endl;
    cout<<"enter a="<<endl;
    cin>>a;
    cout<<"enter b="<<endl;
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}

