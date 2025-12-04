#include<Iostream>
using namespace std;
int main(){
    
int i,j,c;
cout<<"enter number 1 to 100"<<endl;

for(i=2;i<=100;i++){
    c=1;

    for(j=2;j<=i/2;j++){
    if(i%j==0){
        c=0;
    }
}
  if(c==1)
  cout<<i<<endl;

}
    return 0;
}

