#include<iostream>
using namespace std;
int main(){
float a,b;
int ope;
cout<<"Enter first number"<<endl;
cin>>a;
cout<<"Enter second number"<<endl;
cin>>b;
cout<<"ENTER OPERATION NUMBER FROM FOLLOWING\n 1.(+) \n 2.(-) \n 3.(*) \n 4.(/)"<<endl;
cin>>ope;
switch(ope){
case 1:cout<<"Addition is "<<a+b;
        break;
case 2:cout<<"Subtraction is "<<a-b;
        break;
case 3:cout<<"Multiplication is "<<a*b;
        break;
case 4:cout<<"Division is "<<a/b;
        break;
default:cout<<"Enter valid operation number";
}
 
    return 0;
}
