#include<iostream>
using namespace std;
int program();
int main(){
     program();
     return 0;
}
int program(){
    string s;
    int i;
    cout<<"enter string "<<endl;
    cin>>s;
            for(i=s.length()-1;i>=0;i--){
                cout<<s[i];
            }
            cout<<endl;

}