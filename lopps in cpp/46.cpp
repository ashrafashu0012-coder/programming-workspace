#include<Iostream>
using namespace std;
int main(){
    int base,exponent,power=1,i;
    cout<<"enter base"<<endl;
    cin>>base;
    cout<<"enter exponent"<<endl;
    cin>>exponent;

    for(i=1;i<=exponent;i++){
        power=power*base;
    }
    cout<<"power of the number ="<<power;

    
    return 0;
}