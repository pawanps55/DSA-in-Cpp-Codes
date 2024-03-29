#include<iostream>
using namespace std;

char ch;

cout<<"Enter Character :";
cin>>ch;

if(ch>='A' && ch<='Z'){
    cout<<"Character is upper case";
}
else if(ch>='a'&& ch<='z'){
    cout<<"Character is lower case";
}
else if(ch>='0' && ch<='9'){
    cout<<"The number lies between 0 to 9";
} 
