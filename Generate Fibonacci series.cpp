#include<iostream>
using namespace std;
int main(){
int n=10,i;// fabonacci series
int a = 0;
int b = 1;

for ( i = 1; i <=n; i++)
{
    int nextnum=a+b;
    cout<<nextnum<<" ";
    a=b;
    b=nextnum;
}
}
