#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the value of row";
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}