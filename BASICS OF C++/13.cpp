#include<iostream>
using  namespace std;
int main(){
int i;
char ch;

cout<<" capital character"<<endl;

for(i=65;i<=90;i++){
    cout<<i<<"->"<<char(i)<<endl;
}

cout<<" small character"<<endl;
for(i=97;i<=122;i++){
    cout<<i<<"->"<<char(i)<<endl;
}
return 0;
}

