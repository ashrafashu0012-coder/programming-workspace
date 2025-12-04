#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter number "<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++){
      sum=sum+i;
    }
    cout<<" sum of  n natural number ="<<sum<<endl;
    return 0;
}