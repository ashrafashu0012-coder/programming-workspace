#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter numbers"<<endl;
cin>>a>>b>>c;

if(a>b){
if(a>c){
    cout<<"a is greater";
}
}

if(b>a){
    if(b>c){
        cout<<" b is greater";
    }

else{
    cout<<"c is greater";
}
}





    return 0;
}