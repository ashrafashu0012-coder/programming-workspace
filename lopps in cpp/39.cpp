#include<iostream>
using namespace std;
int main(){
int n,rem,rev=0,orig;
cout<<"enter number"<<endl;
cin>>n;
orig=n;
while(n>0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}

if(rev==orig){
    cout<<"pallindrome number";
}
else{
    cout<<"not pallindrome";
}
    return 0;
}