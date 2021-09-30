#include <iostream>
using namespace std;
int main(){
float a,b,c,d,e,sum,percentage;
cout<<"Enter marks of first paper "<<endl;
cin>>a;
cout<<"Enter marks of second paper "<<endl;
cin>>b;
cout<<"Enter marks of third paper "<<endl;
cin>>c;
cout<<"Enter marks of fourth paper "<<endl;
cin>>d;
cout<<"Enter marks of fifth paper "<<endl;
cin>>e;
sum=a+b+c+d+e;
percentage=(sum*100)/500;
cout<<"Percentage is "<<percentage<<"%"<<endl;

if(percentage>=75){
    cout<<"Distinction";
}
else if(percentage>=60 && percentage<75){
    cout<<"First class";
}
else if(percentage>=40 && percentage<60){
    cout<<"Pass class";
}
else{
    cout<<"Fail";
}
    return 0;
}
