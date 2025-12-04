#include<iostream>
using namespace std;
    int main(){
int menu;
cout<<"enter the program menu"<<endl;
cin>>menu;

switch(menu){
    case 1:
    int a,b,c;
    cout<<"plus operator";
    cin>>a>>b;
    c=a+b;
    cout<<"add="<<c;
    break;

    case 2:
    int d,e,f;
    cout<<"minus  operator";
    cin>>d>>e;
    f=d-e;
    cout<<"sub="<<f;
    break;

    case 3:
    int g,h,i;
    cout<<"multiply operator";
    cin>>g>>h;
i=g*h;
    cout<<"mult="<<i;
    break;

    case 4:
    int x,y,z;;
    cout<<"divide operator";
    cin>>x>>y;
    z=x+y;
    cout<<"div="<<z;
    break;
    default: cout<<"not available";

}


        return 0;
    }