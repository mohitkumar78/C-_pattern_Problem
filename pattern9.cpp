#include<iostream>
using namespace std;

int main(){
    // to do pattern9 we should combine the pattern7 and pattern8

    int row;
    cout<<"enter the number of row";
    cin>>row;

    for(int i=0;i<row;i++){
        for(int j=0;j<(row-1-i);j++){
            cout<<" ";
        }
        for(int k=0;k<(2*i+1);k++){
            cout<<"*";
        }
        for(int j=0;j<(row-1-i);j++){
            cout<<" ";
        }
        cout<<endl;
    }
     for(int i=row-1;i>=0;i--){
             for(int j=0;j<(row-1-i);j++){
            cout<<" ";
        }
        for(int k=0;k<(2*i+1);k++){
            cout<<"*";
        }
        for(int j=0;j<(row-1-i);j++){
            cout<<" ";
        }
        cout<<endl;
    }
   return 0;
}