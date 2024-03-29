#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}


int main(){

int arr[10]={1,48,99,10,55,64,89,74,-26,33};
int key;
cout<<"Enter the element for searchinhg : "<<endl;
cin>>key;
 
 bool found = search(arr,10,key);
 if(found){
    cout<<"Key is present "<<endl;
 }
else {
    cout<<"key is absent";
}
}
