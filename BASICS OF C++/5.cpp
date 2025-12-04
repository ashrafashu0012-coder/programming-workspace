#include<iostream>
using  namespace std;
int main(){

    int a,b;
    cout<<"before swapping "<<endl;

    cout<<"enter a="<<endl;
    cin>>a;
    cout<<"enter b="<<endl;
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}

