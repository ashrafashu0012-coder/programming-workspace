#include<iostream>
using namespace std;
int program();
int main(){
    program();
    return 0;
}
int program(){
    int a=-1,b=1,c=0,n;
    cout<<"enter number"<<endl;
    cin>>n;
    while(n>0){
        c=a+b;
        cout<<c<<"\t";
        a=b;
        b=c;
        n--;
    }
}