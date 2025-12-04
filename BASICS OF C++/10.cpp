#include<iostream>
#include<math.h>
using  namespace std;
int main(){
int si,p,r,t, ci;

cout<<"enter values"<<endl;
cin>>p>>r>>t;

si=p*r*t/100;
cout<<"simple interest="<<si<<endl;

ci=p*pow((1+r/100),t);
    cout<<"compound interest="<<ci<<endl;
    return 0;
}
