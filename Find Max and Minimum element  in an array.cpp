#include<iostream>
using namespace std;

int getMax(int num[],int n){
    
    int Max = num[5];
    for(int i=0;i<n;i++){
    if(num[i]>Max){
        Max = num[i];
    }
    }
    return Max;
}
int getMin(int num[],int n){

   int Min = num[0];
   for(int i=0;i<n;i++){
   
   }
return Min;
}



int main(){

    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum Value is "<<getMax<<endl;
    cout<<"Minimum Value is "<<getMin<<endl;
}
