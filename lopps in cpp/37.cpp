#include<iostream>
using namespace std;
int main(){
 int n,rem,rev=0;
 cout<<"enter no"<<endl;
 cin>>n;
 while(n>0){
    rem=n%10;
    rev=rev*10 +rem;
    n=n/10;
 }
 cout<<"reverse number ="<<rev;
    return 0;
}