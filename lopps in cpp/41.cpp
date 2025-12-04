#include<iostream>
using namespace std;
int main(){
    int n,a=-1,b=1,c=0;
    cout<<"enter number"<<endl;
    cin>>n;
        while(n>0){
            c=a+b;
            cout<<c<<"\t";
            a=b;
            b=c;
            n--;
        }
        return 0;
}