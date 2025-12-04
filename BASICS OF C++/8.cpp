#include<iostream>
using  namespace std;
int main(){
int l,b,h,bs,s, rect,tri,sq;
cout<<"enter the values";
cin>>l>>b>>h>>bs>>s;

rect=l*b;
cout<<"area of rectangle="<<rect<<endl;
tri=0.5*bs*h;
cout<<"area of triangle="<<tri<<endl;
    sq=s*s;
    cout<<"area of square="<<sq<<endl;
    return 0;
}

