#include<iostream>
using namespace std;
int factorial();
int main(){
    factorial();
    return 0;
}
int factorial(){
    int n=5,fact=1;
    while(n>0){
        fact=fact*n;
        n--;
    }
    cout<<"factorial ="<<fact;
}