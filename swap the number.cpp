#include <iostream>

using namespace std;

void swapPointer(int* a, int* b)
{
    int temp =* a;
    *a = *b;
    *b = temp;
};

int main(){

    int x = 4;
    int y = 5;

    cout<<"Swap the value of x "<< x <<" and value of y "<< y <<endl;
    swapPointer(&x, &y);
     cout<<"Swap the value of x "<< x <<" and value of y "<< y <<endl;





}
