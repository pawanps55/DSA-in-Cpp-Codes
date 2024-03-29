#include<iostream>
using namespace std;
int main(){
// create 2d array
int arr[3][4];

 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}

//print 2d array
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";

    } 
    cout<<endl;
} 
