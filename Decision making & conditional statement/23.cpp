#include<iostream>
using namespace std;
int main(){

int m1,m2,m3,m4,m5,tmarks,avg;
cout<<"enter the marks "<<endl;
cin>>m1>>m2>>m3>>m4>>m5;

tmarks=m1+m2+m3+m4+m5;
cout<<"total marks ="<<tmarks<<endl;

avg=tmarks/5;
cout<<"average marks="<<avg<<endl;

if(avg>=90){
    cout<<" a grade of student"<<endl;
}
else if(avg>=80){
    cout<<" b garde of student"<<endl;

}
else{
    cout<<" c grade of student";
}
    return 0;
}