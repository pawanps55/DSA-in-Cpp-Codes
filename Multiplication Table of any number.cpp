#include <iostream>
using namespace std;
 int main(){
    int num;
    int i=1;
     cout<<"Enter the number for table you want:";
    cin>>num;
    cout<<"table of "<< num <<" is below : "<<endl;
    for(i=1;i<11;i++){
       cout<<i*num<<endl;
    }


 }
