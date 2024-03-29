#include<iostream>
using namespace std;
int pivot(int arr[],int n){

 int s=0;
 int e= n-1;
 int mid = s+(e-s)/2;
 
 while (s<e)
 {
    if(arr[mid]>=arr[0]){
        s = mid+1;
    }
    else{
        e=mid;
    }
     mid = s+(e-s)/2;
 
 }
    return e;
}

int main(){

   int brr[5]={3,8,10,17,1};
  
   cout<<"Pivot element is : "<<pivot(brr,5)<<endl;


}
