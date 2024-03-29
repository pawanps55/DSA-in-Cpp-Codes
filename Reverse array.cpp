#include<iostream>
#include<vector>
using namespace std;
vector<int>reverse(vector<int>v)
{
    int s = 0;
    int e = v.size()-1;

    while(s<=e){
      
      swap(v[s],v[e]);
      s++;
      e--;
      
    }return v;}
void printarray(vector<int>v){

for(int i=0;i<v.size();i++){
    cout<<v[i]<<"  ";
    
}
cout<<endl;

}

int main(){

    vector<int>v;

    v.push_back(10);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.push_back(3);

    vector<int>ans = reverse(v);

    cout<<"Printing The array :"<<endl;

    printarray(ans);

    return 0;

}
