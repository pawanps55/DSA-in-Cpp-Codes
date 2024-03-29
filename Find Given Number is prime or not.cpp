#include<iostream>
using namespace std;
int i = 2;
int n;
cin>>n;

while(i<n){
    if(n%i==0){
        cout<<" Not Prime for : "<<i<<endl;
        

    }
    else{
        cout<<"Prime for : "<<i<<endl;

    }
    i=i+1;
}
