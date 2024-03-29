#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int target,int n,int m){
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==target){
                return 1;
            }
        } 
    }
    return 0;
}
int main(){
// create 2d array
int arr[3][4];

for(int row=0; row<3;row++){
    for(int col=0;col<4;col++){
        cin>>arr[row][col];
    }
}

for(int row = 0; row<3;row++){
    for(int col=0;col<4;col++){
        cout<<arr[row][col]<<" ";
    }
}

int target;
cin>>target;

if(isPresent(arr,target,3,4)){
    cout<<"Target is found "<<endl;
}
else{
    cout<<"Target is Not found";
}
}
