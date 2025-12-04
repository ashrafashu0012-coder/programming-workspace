#include<iostream>
using namespace std;
int main(){
int n,rem,arm=0,orig;
cout<<"enter number"<<endl;
cin>>n;
orig=n;
while(n>0){
    rem=n%10;
    arm=arm+rem*rem*rem;
    n=n/10;
}
if(arm==orig){
    cout<<"armstrong numer";

}
else{
    cout<<"not armstrong number";
}
    return 0;
}