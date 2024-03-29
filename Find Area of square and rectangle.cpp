#include <iostream>
using namespace std;
int area(int a, int b){
    return a * b;
}

int square(int a){
    return a * a;
}

int main(){
    
    cout<<"The area of rectangle : "<<area(5,8)<<endl;
    cout<<"THe area of square : "<<square(5)<<endl;
    
}
