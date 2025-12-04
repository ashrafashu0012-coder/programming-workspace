#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows"<<endl;
    cin>>n;
      
      for(int i=0;i<n;i++){
        int val=1;
                for(int space=1;space<=n-i;space++)
                cout<<" ";

                for(int j=0;j<=i;j++){
                    cout<<val<<" ";
                    val=val*(i-j)/(j+1);
                }
                cout<<endl;
      }
      return 0;
}