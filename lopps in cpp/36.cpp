#include<iostream>
using namespace std;
int main(){

    int n,fact=1;
cout<<"enter no"<<endl;
cin>>n;
while(n>0){
    fact=fact*n;
    n--;
}
cout<<"factorial number ="<<fact;
    return 0;
}