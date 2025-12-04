#include<Iostream>
using namespace std;
int main(){
    int c=0,i,n;
cout<<"enter number"<<endl;
cin>>n;
for(i=1;i<=n;i++){
    if(n%i==0)
    c++;
}
if(c==2){
    cout<<"prime number";
}
else{
    cout<<"not prime number";
}

    
    return 0;
}