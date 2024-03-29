#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){

  int start =0;
  int end =size-1;
  int mid = start+((end-start)/2);
  
  while(start<=end){
    
    if(arr[mid] == key){
        return mid;
    }
    if(key>arr[mid]){
        start = mid+1;
    }
    else{
        end = mid-1;
    }
     mid = start+((end-start)/2);
  }
     return -1;

}
int main (){
  
  int even[6] = {2,6,8,12,14,18};

  int odd[7] = {12,14,16,18,20,24,30};
  
  int evenindex = binarysearch(even,6,18);
  int oddindex = binarysearch(odd,7,12);

cout<<"Index of 18 : "<<evenindex<<endl;
cout<<"Index of 12 : "<<oddindex<<endl;


  return 0;



}
