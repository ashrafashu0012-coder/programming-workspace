#include<iostream>
using namespace std;
int main(){
int a,b,x,y,gcd,lcm;
cout<<"enter the numbera"<<endl;
cin>>a>>b;
    x=a;
    y=b;
            while(x!=y){
                if(x>y)
                x=x-y;
                else
                y=y-x;
            }
   
            gcd=x;
            lcm=(a*b)/gcd;
            cout<<"gcd="<<gcd<<endl;
            cout<<"lcm="<<lcm;
   
    return 0;
}