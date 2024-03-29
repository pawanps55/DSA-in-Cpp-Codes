#include<iostream>
using namespace std;
int main(){
int a,b;

cout<<"Enter Value of a : ";
cin>>a;

cout<<"Enter Value of b : ";
cin>>b;

char op;
cout<<"Enter Operation Want to perform : ";
cin>>op;

switch(op){
   
   case '+': cout<<(a+b);
             break;
   
   case '-': cout<<(a-b);
             break;
   case '*': cout<<(a*b);
             break;

   case '/': cout<<(a/b);
             break;
    case '%': cout<<(a%b);
             break;

    default: cout<<"Plz Enter Valid Operator ";



}
}
