#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;

        if(n%5==0&&n%11==0){
            cout<<" number is divisble by 5 and 11"<<endl;
        }
        else{
            cout<<"number not divisble by 5 and 11";
        }

    return 0;
}