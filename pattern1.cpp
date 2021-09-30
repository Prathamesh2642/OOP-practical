#include <iostream>
using namespace std;
int main(){
for(int i=0;i<=5;i++){
    cout<<endl;
    for(int j=0;j<=5;j++){
        if (i<j){
            cout<<"*";
        }
    }
}
return 0;
}
