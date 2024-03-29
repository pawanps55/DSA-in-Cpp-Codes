#include<iostream>
using namespace std;

char tolowercase(char ch){
 
 if(ch >='a' && ch<= 'z'){
    return ch;
 }
else{
    char temp = ch + 'A'-'a';
    return temp; 
}

}

bool checkpalindrome(char name[],int n){

  int s = 0;
  int e = n-1;

  while(s<=e){
    if(tolowercase(name[s])!=tolowercase(name[e])){
        return 0;
    }
    else{
        s++;
        e--;
    }
    return 1;
  }

}
void reverse(char name[],int n){

    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(name[s++],name[s--]);
    }
    
 }
int getlength(char name[]){
    int count=0;
    for(int i =0; name[i]!='\0'; i++)
   { count++;}
    return count;
}
 

int main(){

 char name[10];
 cout<<"Enter the Name : ";
 cin >> name;
 cout<<"Your name is "<<name<<endl;
 int len = getlength(name);
 cout<<"Your Length is "<<len<<endl;
 reverse(name,len);

 cout<<"Reverse array is ";
 cout<<name<<endl;

 cout<<"It is palindrome or Not : "<< checkpalindrome(name,len)<<endl;

 return 0;

}
