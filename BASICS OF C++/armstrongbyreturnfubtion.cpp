#include<iostream>
using namespace std;
int program();
int main(){
    int p;
    p= program();
    cout<<p;
}
int program(){
    int n,arm=0,rem,orig;
    cout<<"enter the number"<<endl;
cin>>n;
orig=n;
        while(n>0){
            rem=n%10;
            arm=arm+rem*rem*rem;
            n=n/10;
        }
        if(arm==orig){
            cout<<"armstrong number";
        }
        else{
            cout<<"not armstrong number";
        }
        return arm;
    
}