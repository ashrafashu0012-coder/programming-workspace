#include<Iostream>
using namespace std;
int main(){
    string s;
    int i;
    cout<<"enter the string"<<endl;
    cin>>s;

    for(i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
cout<<endl;

    
    return 0;
}