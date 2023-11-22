#include<iostream>
using namespace std;

int main(){
    int row;
    int count=1;
    cout<<"enter the row";
    cin>>row;
    for(int i=0;i<row;i++){
           for(int j=0;j<=i;j++){
             cout<<count;
           }
           cout<<endl;
           count++;
    }
    return 0;
}