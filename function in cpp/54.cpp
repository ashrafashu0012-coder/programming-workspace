#include<iostream>
using namespace std;
int program();
int main(){
    program();
    return 0;
}
int program(){
    int a=422,b=80,c=12;
    if(a>b&&a>c){
        cout<<"a is largest";
    }
    else if(b>a&&b>c){
        cout<<"b is largest";
    }
    else{
        cout<<" c is largest";
    }

}